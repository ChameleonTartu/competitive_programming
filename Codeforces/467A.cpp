#include <iostream>

using namespace std;

int main() {
  int num_people, answer{0}; cin >> num_people;
  for (int i = 0; i < num_people; ++i) {
    int people, capacity;
    cin >> people >> capacity;
    if (capacity - people > 1) ++answer;
  }
  cout << answer << endl;
  return 0;
}
