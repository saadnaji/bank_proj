note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class TRANSFER_INTERFACE
inherit
	COMMAND
	redefine make end

feature {NONE} -- Initialization

	make(a_name: STRING; args: TUPLE; a_container: ABSTRACT_UI_INTERFACE)
		do
			Precursor(a_name,args,a_container)
			routine := agent transfer(? , ? , ?)
			routine.set_operands (args)
			if
				attached {STRING} args[1] as id1 and then attached {STRING} args[2] as id2 and then attached {REAL} args[3] as amount
			then
				out := "transfer(" + "%"" + id1.out + "%"" + "," + "%"" + id2.out + "%"" + "," + amount.out + ")"
			else
				error := True
			end
		end

feature -- routine

	transfer(id1: STRING ; id2: STRING ; amount: REAL)
    	deferred
    	end
end
