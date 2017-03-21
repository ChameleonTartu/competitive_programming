#include <iostream>
#include <vector>

using namespace std;

vector<int> GenerateLuckyNumbers(const int MAX) {
  vector<int> lucky_numbers{4, 7};
  for (size_t i = 0; i < lucky_numbers.size(); ++i) {
    for (int end : {4, 7}) {
      int num = lucky_numbers[i]*10 + end;
      if (num > MAX) continue;
      lucky_numbers.emplace_back(num);
    }
  }
  return lucky_numbers;
}

int main() {
  int num; cin >> num;
  const int MAX = 1000;
  vector<int> numbers = GenerateLuckyNumbers(MAX);
  for (const auto& number : numbers) {
    if (num % number == 0) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
