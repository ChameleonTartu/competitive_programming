number, exit_coordinate = gets.chomp.split(' ').map(&:to_i)
left_side = -Float::INFINITY
right_side = Float::INFINITY

if number > 0 then
	exit_coordinate > 0 ? right_side = exit_coordinate : left_side = exit_coordinate
	
	coordinates = gets.chomp.split(' ').map(&:to_i) 

	start_coordinate = 0

	coordinates.each do |coordinate|
		if coordinate < 0 and coordinate > left_side then
			left_side = coordinate
		elsif coordinate > 0 and coordinate < right_side then
			right_side = coordinate
		end
	end
end


def impossible(exit_coordinate, left_side, right_side)
	if (exit_coordinate > 0 and exit_coordinate > right_side) or
	   (exit_coordinate < 0 and exit_coordinate < left_side) or
	   left_side.abs == Float::INFINITY or
	   right_side.abs == Float::INFINITY  then
		return true
	end
	false
end

if impossible(exit_coordinate, left_side, right_side) then
	puts "Impossible"
elsif exit_coordinate < 0 then
	puts "#{exit_coordinate.abs + 2 * right_side} #{exit_coordinate.abs}"
else
	puts "#{exit_coordinate} #{exit_coordinate.abs + 2*left_side.abs}"
end

