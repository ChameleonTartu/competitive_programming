class HammingCode
	def initialize(code)
		@code = code
	end

	def create_petal(circle_sum)
		circle_sum % 2
	end

	def distance(code)
		new_code = Array.new(code.size)
		0.upto(code.size - 1) {|index| new_code[index] = (code[index] - @code[index]).abs}
		new_code.inject(:+)
	end

	def fill_code(total)
		code = Array.new(4)
		(code.size - 1).downto(0) {|index| code[index] = total % 2; total /= 2}
		code
	end

	def change(digit)
		digit == 1 ? 0 : 1
	end

	def create_petals(code)
		petals_size = @code.size - code.size
		petals = Array.new(petals_size)
		petals_size.times do |index|
			petals[index] = create_petal(code[0..(code.size - 1)].inject(:+) - code[index])
		end
		petals
	end

	def is_hamming(code)
		main_petals = create_petals(code)
		0.upto(code.size - 1) do |index|
			new_code = code.clone
			new_code[index] = change(code[index])
			#puts "#{new_code == code}"	
			petals = create_petals(new_code)
			(return false) if petals == main_petals
		end	
		true
	end	

	def find_hamming_code
		0.upto(15) do |index|
			code = fill_code(index)
			if distance(code) == 1 then
				petals = create_petals(code)
				if petals == @code[(code.size - @code.size)..-1] and is_hamming(code) then
					@code = code + petals
					return 
				end
			end	
		end
	end

	def print_code
		puts "#{@code.join(" ")}"
	end

end

code = gets.chomp.split(" ").map(&:to_i)
hamming_code = HammingCode.new(code)
hamming_code.find_hamming_code
hamming_code.print_code
