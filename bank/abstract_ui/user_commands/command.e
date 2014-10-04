note
	description: "The interface for an input COMMAND"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMMAND
inherit
	COMMAND_INTERFACE
	redefine
		make
	end

feature {NONE}
	make(a_name: STRING; a_args: TUPLE; a_container: ABSTRACT_UI_INTERFACE)
		local
			l_bank_acess : BANK_ACCESS
		do
			Precursor(a_name, a_args, a_container)
			-- may set your own model state here ...
			bank := l_bank_acess.bank

		end

feature -- attributes
	-- may declare your own model state here'
	bank : BANK
end
