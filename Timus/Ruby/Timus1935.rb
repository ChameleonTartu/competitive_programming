number = gets.chomp
skins = gets.chomp.split(" ").map(&:to_i)

puts "#{skins.max + skins.inject(:+)}"
