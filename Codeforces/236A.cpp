#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
  unordered_set<char> answer{};
  string nick_name; cin >> nick_name;
  for (const auto& letter : nick_name) {
    answer.insert(letter);
  }

  if (answer.size() % 2) {
    cout << "IGNORE HIM!";
  }
  else {
    cout << "CHAT WITH HER!";
  }
  return 0;
}
