note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class DEPOSIT
inherit 
	DEPOSIT_INTERFACE
	redefine deposit end
create
	make

feature
	deposit(id: STRING ; amount: REAL)
    	do
			-- perform some update on the model state
			container.on_change.notify ([Current])
    	end

end
