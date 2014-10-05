note
	description: "Summary description for {OUTPUT_HANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OUTPUT_HANDLER
inherit
	OUTPUT_HANDLER_INTERFACE
	redefine
		make, log_command
	end
create
	make

feature {NONE} -- Initialization

	make
		-- Initialization for `Current'.
	local
		bank_access : BANK_ACCESS
	do
		Precursor
		-- may also override the string 'initial_state'
	bank := bank_access.bank
	end

feature -- queries

	bank : BANK

	bank_state : STRING
		do
			Result := "  System state: " + bank.out + "%N"
		end

	initial_state : STRING
		do
			Result := "  init%N" -- may be redefined
		end

feature -- Log to 'output'

	log_command (a_cmd: COMMAND)
			-- Log the effect of 'a_cmd' to 'output'
		local
			l_command_name: STRING
		do
			l_command_name := "->" + a_cmd.out + "%N"
			if a_cmd.message.count = 0 then
				output := output + l_command_name
				-- also append model state to 'output'
				output.append (bank_state)
			else
				output := output + l_command_name + "  Error: " + a_cmd.message
			end
		end
end
