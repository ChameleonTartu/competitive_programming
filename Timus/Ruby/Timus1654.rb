class Solution
	def initialize(cipher_message)
		@message = cipher_message
	end
	
	def remove_letters(message)
		index = 1
		while index < message.size do
			if message[index - 1] == message[index] then
				message = message[0, index - 1] +  remove_letters(message[index + 1, message.size - 1])
				index < 2 ? index = 1 : index -= 1
			else
				index += 1
			end
		end
		message
	end

	def decipher_message()
		@cleaned_message = remove_letters(@message)
		while @message.size != @cleaned_message.size and @message.size > 0 do 
			#puts "#{@message}, #{@cleaned_message}"
			@message = @cleaned_message 
			@cleaned_message = remove_letters(@cleaned_message)
		end
	end


	def print_message()
	   puts @message	
	end
end

message = gets.chomp
solution = Solution.new(message)
solution.decipher_message()
solution.print_message()
