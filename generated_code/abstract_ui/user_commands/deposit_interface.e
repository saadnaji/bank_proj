note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class DEPOSIT_INTERFACE
inherit
	COMMAND
	redefine make end

feature {NONE} -- Initialization

	make(a_name: STRING; args: TUPLE; a_container: ABSTRACT_UI_INTERFACE)
		do
			Precursor(a_name,args,a_container)
			routine := agent deposit(? , ?)
			routine.set_operands (args)
			if
				attached {STRING} args[1] as id and then attached {REAL} args[2] as amount
			then
				out := "deposit(" + "%"" + id.out + "%"" + "," + amount.out + ")"
			else
				error := True
			end
		end

feature -- routine

	deposit(id: STRING ; amount: REAL)
    	deferred
    	end
end
