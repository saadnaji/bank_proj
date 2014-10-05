note
	description: "Summary description for {MODEL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BANK

inherit
	ANY
	redefine out end

create {BANK_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
		create accounts.make (10)
          accounts.compare_objects
		end

feature -- model attributes

	accounts: HASH_TABLE[ACCOUNT, STRING]
     total: INTEGER

feature -- queries

     new(a_name: STRING)
 require
 not accounts.has (a_name)
local

 l_account: ACCOUNT
 do
 create l_account.make (a_name)
 accounts.extend (l_account, a_name)
 end

 deposit(a_name:STRING; a_value:INTEGER)
 require
 accounts.has (a_name)
 accounts[a_name] /= Void
 local
 l_account: ACCOUNT
 do
 check attached accounts[a_name] as a then
 l_account := a
 end
 l_account.deposit (a_value)
 total := total + a_value
 end

 withdraw(a_name:STRING; a_value:INTEGER)
  require
 accounts.has (a_name)
 and then item(a_name).balance - a_value >= 0
 local
 l_account: ACCOUNT
  do
 check attached accounts[a_name] as a then
 l_account := a
 end
 l_account.withdraw (a_value)
 total := total - a_value
 end


 item(a_name: STRING): ACCOUNT
 -- return attached account
 require
 accounts.has (a_name)
do
 check attached accounts[a_name] as a then
 Result := a
 end
 ensure
 Result = accounts[a_name]
 end

 out: STRING
local
 do
 Result := " total: " + total.out + "%N"
 across accounts as a
 loop
	Result := Result + a.item.out + "%N"
 end
 end

 feature -- wipe clean
 wipe
 do
 accounts.wipe_out
 total := 0
 end


end
