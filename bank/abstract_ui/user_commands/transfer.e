note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class TRANSFER
inherit 
	TRANSFER_INTERFACE
	redefine transfer end
create
	make

feature
	transfer(id1: STRING ; id2: STRING ; amount: REAL)
    	do
			-- perform some update on the model state
			container.on_change.notify ([Current])
    	end

end
