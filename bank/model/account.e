note
	description: "Summary description for {ACCOUNT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ACCOUNT
	inherit
		Any
	redefine out end
create
	make
feature -- make
	make(a_name : STRING)
	do
		name := a_name
	end

feature -- account
	deposit ( amount : INTEGER)
		require
			amount >= 0
		do
			balance := balance + amount
		ensure
			balance = old balance + amount
		end
	withdraw (amount : INTEGER)
		require
			balance - amount >= 0
			amount >= 0
		do
			balance := balance - amount
		ensure
			balance = old balance - amount
		end

		out : STRING
		do
			result := " " + name + "." + " balance: " + balance.out

		end


feature -- attributes

	name : STRING
	balance : INTEGER
invariant
	balance >= 0
end
