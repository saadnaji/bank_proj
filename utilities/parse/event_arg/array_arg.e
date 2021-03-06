note
	description: "Summary description for {ARRAY_ARG}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ARRAY_ARG
inherit
	COMPOSITE_ARG
	redefine
		out
	end
create
	make
feature

	make (v : ARRAY[EVT_ARG])
		do
			value := v
		end

feature -- queres

	out : STRING
		local
			i: INTEGER
		do
			create Result.make_empty
			Result.append ("<<")
			from
				i := value.lower
			until
				i > value.upper
			loop
				Result.append (value[i].out)
				if i < value.upper then
					Result.append (", ")
				end
				i := i + 1
			end
			Result.append (">>")
		end

feature -- conversions to array of simple values

	to_bool_val_array : ARRAY[BOOLEAN]
		require
			across value as member all
				attached {BOOL_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {BOOL_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_char_val_array : ARRAY[CHARACTER]
		require
			across value as member all
				attached {CHAR_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {CHAR_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_int_val_array : ARRAY[INTEGER]
		require
			across value as member all
				attached {INT_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {INT_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_real_val_array : ARRAY[REAL]
		require
			across value as member all
				attached {REAL_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {REAL_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

	to_str_val_array : ARRAY[STRING]
		require
			across value as member all
				attached {STR_ARG} member.item end
		do
			create Result.make_empty
			across value as member
			loop
				if attached {STR_ARG} member.item as arg then
					Result.force (arg.value, Result.upper + 1)
				end
			end
		end

feature -- conversions to array of tuple values
end