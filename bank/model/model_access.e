note
	description: "Summary description for {MODEL_ACCESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
      BANK_ACCESS

feature
  bank : BANK
		once
			create Result.make
		end

 wipe_bank
   do
     bank.wipe
   end


invariant
	bank = bank
end
