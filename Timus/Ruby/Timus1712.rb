class ChiperGrille
	def initialize(grid, message)
		@grid = grid
		@message = message
		@size = @grid.size - 1
	end

	# Will turn grid 90 degree clockwise:
	def turn
		new_grid = Array.new(@size + 1) { Array.new(@size + 1)}
		0.upto(@size) do |row|
			0.upto(@size) do |column|
				new_grid[column][@size - row] = @grid[row][column]
			end
		end
		@grid = new_grid
	end

	def decode
		plane_message = ""
		0.upto(@size) do |row|
			0.upto(@size) do |column|
				plane_message += @message[row][column] if @grid[row][column] == 'X'
			end
		end
		plane_message
	end

	def get_message
		plane_message = decode()
		1.upto(@size) do |turnover|
			turn
			plane_message += decode()
		end
		plane_message
	end
end

size = 4
grid = Array.new
message = Array.new
size.times do |row|
	grid.push(gets.chomp.split(""))
end

size.times do |row|
	message.push(gets.chomp.split(""))
end

grille = ChiperGrille.new(grid, message)
puts grille.get_message
