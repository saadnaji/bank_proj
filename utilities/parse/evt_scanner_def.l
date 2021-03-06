%{
deferred class EVT_SCANNER

inherit

	YY_COMPRESSED_SCANNER_SKELETON
		rename
			make as make_compressed_scanner_skeleton,
			reset as reset_compressed_scanner_skeleton
		end
		
	EVT_TOKENS
%}

-- instructs gelex to send its output to the file calc_scanner.e rather than stdout
%option nodefault outfile="evt_scanner.e" line

TK_SYSTEM		system
TK_BOOL			BOOLEAN
TK_CHAR			CHARACTER
TK_INT			INTEGER
TK_REAL			REAL
TK_STR			STRING
TK_TUPLE		TUPLE
TK_ARRAY		ARRAY
TK_TRUE_LOWER	true
TK_FALSE_LOWER	false
TK_TRUE			TRUE
TK_FALSE		FALSE
TK_COMMA	  	","
TK_COLON      	":"
TK_SEMI_COLON 	";"
TK_LPAREN	  	"("
TK_RPAREN     	")"
TK_LSBRAC     	"["
TK_RSBRAC     	"]"
TK_LABRAC	  	"<"
TK_RABRAC	  	">"
TK_DQUOTE	  	"\""
TK_MINUS	  	"-"

-- a digit is 1 or more characters between 0 and 9
DIGIT		[0-9]+

-- a word is 1 or more characters between a and z or A and Z
WORD		[a-zA-Z][a-zA-Z0-9_]*

-- a (possibly empty) string literal
STRING_LIT		\"(\\.|[^"])*\"

-- a character literal
CHARACTER_LIT	'.'

-- whitespace is 1 or more spaces, tabs, or carriage returns
WS		[ \t\r]+

%%

{WS}		-- ignore whitespaces

[\n\r?]		-- ignore new lines
		
{TK_SYSTEM}			{last_token := TK_SYSTEM}	
{TK_BOOL}			{last_token := TK_BOOL}
{TK_CHAR}			{last_token := TK_CHAR}
{TK_INT}			{last_token := TK_INT}
{TK_REAL}			{last_token := TK_REAL}
{TK_STR}			{last_token := TK_STR}
{TK_TUPLE}			{last_token := TK_TUPLE}
{TK_ARRAY}			{last_token := TK_ARRAY}
{TK_FALSE}			{last_token := TK_FALSE}
{TK_TRUE}			{last_token := TK_TRUE}
{TK_FALSE_LOWER}	{last_token := TK_false}
{TK_TRUE_LOWER}		{last_token := TK_true}

{TK_COMMA}    	  	{last_token := TK_COMMA}
{TK_COLON}      	{last_token := TK_COLON}
{TK_SEMI_COLON} 	{last_token := TK_SEMI_COLON}
{TK_LPAREN}	    	{last_token := TK_LPAREN}
{TK_RPAREN}     	{last_token := TK_RPAREN}
{TK_LSBRAC}     	{last_token := TK_LSBRAC}
{TK_RSBRAC}     	{last_token := TK_RSBRAC}
{TK_LABRAC}	  		{last_token := TK_LABRAC}
{TK_RABRAC}	  		{last_token := TK_RABRAC}
{TK_DQUOTE}     	{last_token := TK_DQUOTE}
{TK_MINUS}			{last_token := TK_MINUS}

		
{DIGIT}		{ -- return a digit token and store the integer value in last_integer_value, which the parser will use
			last_integer_value := text.to_integer
			last_token := NUMBER
		}

{DIGIT}+"."{DIGIT}*  {
		                 last_real_value := text.to_real
		                 last_token := REAL
        }

{WORD}		{ -- return an identifier and store the value in last_string_value, which the parser will use
			last_string_value := text
			last_token := IDENT
		}

{CHARACTER_LIT}	{
				last_character := text.item(2)
				last_token := CHAR_LIT
			}

{STRING_LIT}	{
				last_string_value := text.substring(2, text.count - 1)
				last_token := STR_LIT
			}

"--".*           -- Ignore comments

. 		{-- DO NOT REMOVE THIS!!!!! 
        -- return the character code for a character, which are reserved tokens that the parser uses
		-- The character code for '+' is a value token and is used by the parser by writing
		-- '+' as a token in a rule
		last_token := text_item (1).code
		}

%%

feature {NONE} -- Initialization

	make 
		do
			make_compressed_scanner_skeleton
		end

feature -- reset

	reset 
		do
			reset_compressed_scanner_skeleton
		end

end