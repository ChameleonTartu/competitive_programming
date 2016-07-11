# More proper solution

class Solution

	def initialize()
		@number = gets.chomp.to_i
		@connections = Hash.new
		@people = Hash.new
	end

	def read_teams()
		@number.times { |team_number|
			team = gets.chomp.split(' ').map(&:to_sym)
			team.each do |member| 
				team.each do |teammate| 
					@people[member] = @people[teammate] = 10000
					if member != teammate then
						(@connections.has_key? member) ? @connections[member].push(teammate) : @connections[member] = [teammate]
						(@connections.has_key? teammate) ? @connections[teammate].push(member) : @connections[teammate] = [member]
					end
				end
			end
		}
	end
	
	def update_person_teammates(person, connection)
		if (@people.has_key? person) and (connection < @people[person]) then
			@people[person] = connection
			@connections[person].each {|teammate| update_person_teammates(teammate, connection + 1)} 
		end
	end

	def print_people()
		@people = @people.sort_by {|name, connection| name}
		@people.each do |name, connection| 
			puts connection == 10000 ? "#{name} undefined" : "#{name} #{connection}"
		end
	end

end


solution = Solution.new
solution.read_teams()
solution.update_person_teammates(:Isenbaev, 0)
solution.print_people()
