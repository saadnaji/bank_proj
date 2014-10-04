note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class NEW
inherit 
	NEW_INTERFACE
	redefine new end
create
	make

feature
	new(id: STRING)
    	do
			-- perform some update on the model state
			container.on_change.notify ([Current])
    	end

end
