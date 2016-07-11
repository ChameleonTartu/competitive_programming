class Matrix
	def initialize(matrix)
		@matrix = matrix
	end

	def max(argument_one, argument_two)
		(return argument_two) if argument_one == nil
		(return argument_one) if argument_two == nil
		argument_one > argument_two ? argument_one : argument_two
	end

	def max_hourglass
		hourglass = nil
		max_index = @matrix.size - 2
		1.upto(max_index) do |row|
			1.upto(max_index) do |column|
				hourglass = max(hourglass, calculate_hourglass_by_index(row, column))
			end
		end


		hourglass
	end
	
	private	
	def calculate_hourglass_by_index(row, column)
		@matrix[row][column] + 
			@matrix[row - 1][column - 1] + @matrix[row - 1][column] + @matrix[row - 1][column + 1] + 
			@matrix[row + 1][column - 1] + @matrix[row + 1][column] + @matrix[row + 1][column + 1]
	end

end




size = 6
matrix = Array.new(size)
size.times do |index|
	matrix[index] = gets.chomp.split(" ").map(&:to_i)
end

matrix = Matrix.new(matrix)
puts "#{matrix.max_hourglass}"
