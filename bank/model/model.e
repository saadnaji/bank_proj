note
	description: "Summary description for {MODEL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MODEL

inherit
	ANY
	redefine out end

create {MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			s := "default model state"
		end

feature -- model attributes
	s : STRING

feature -- queries
	out : STRING
		do
			Result := s
		end

end