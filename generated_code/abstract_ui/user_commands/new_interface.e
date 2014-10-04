note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class NEW_INTERFACE
inherit
	COMMAND
	redefine make end

feature {NONE} -- Initialization

	make(a_name: STRING; args: TUPLE; a_container: ABSTRACT_UI_INTERFACE)
		do
			Precursor(a_name,args,a_container)
			routine := agent new(?)
			routine.set_operands (args)
			if
				attached {STRING} args[1] as id
			then
				out := "new(" + "%"" + id.out + "%"" + ")"
			else
				error := True
			end
		end

feature -- routine

	new(id: STRING)
    	deferred
    	end
end
