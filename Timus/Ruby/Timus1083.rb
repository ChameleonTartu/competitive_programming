def factorial(number, divisor)
	return number if number <= divisor
	return number * factorial(number - divisor, divisor)
end

number, signs = gets.chomp.split(' ')

puts factorial(number.to_i, signs.length)
