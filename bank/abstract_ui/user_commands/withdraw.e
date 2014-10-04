note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class WITHDRAW
inherit 
	WITHDRAW_INTERFACE
	redefine withdraw end
create
	make

feature
	withdraw(id: STRING ; amount: REAL)
    	do
			-- perform some update on the model state
			container.on_change.notify ([Current])
    	end

end
