/*
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Forum {
	map<string, pair<string, string>> forum_information;
	int number_of_queries;

	map<string, pair<string, string>>::iterator is_in_forum(string username) {
		return forum_information.find(username);
	}
	public:
		void check_and_logout(string username) {
			auto iterator = is_in_forum(username);
			if (iterator != forum_information.end()) {
				if (iterator->second.second != "login") {
					cout << "fail: already logged out" << endl;
				}
				else {
					forum_information[iterator->first] = make_pair(iterator->second.first, "logout");
					cout << "success: user logged out" << endl;
				}
			}
			else { 
				cout << "fail: no such user" << endl;
			}
		}

		void check_and_login(string username, string password) {
			auto iterator = is_in_forum(username);
			if (iterator != forum_information.end()) {
				if (iterator->second.first != password)
					cout << "fail: incorrect password" << endl;
				else if (iterator->second.second == "login")
					cout << "fail: already logged in" << endl;
				else {
					forum_information[iterator->first] = make_pair(iterator->second.first, "login");
					cout << "success: user logged in" << endl;
				}

			}
			else {
				cout << "fail: no such user" << endl;
			}
		}

		void check_and_register(string username, string password) {
			auto iterator = is_in_forum(username);
			if (iterator != forum_information.end()) {
				cout << "fail: user already exists" << endl;
			}
			else {
				forum_information[username] = make_pair(password, "register");
				cout << "success: new user added" << endl;
			}
		}

		void read_and_execute_command() {
			string command, username, password;
			cin >> command >> username;
			if (command != "logout") {
				cin >> password;
				if (command == "login") {
					check_and_login(username, password);
				}
				else {
					check_and_register(username, password);
				}
			}
			else {
				check_and_logout(username);
			}
		}

		void read_all_commands() {
			for (int i = 0; i < number_of_queries; ++i) {
				read_and_execute_command();
			}
		}

		Forum(int number_of_queries) :number_of_queries(number_of_queries) {};
		~Forum() {};
};





int main() {
	int number_of_queries; cin >> number_of_queries;
	Forum forum(number_of_queries);
	forum.read_all_commands();
	return 0;
}

*/