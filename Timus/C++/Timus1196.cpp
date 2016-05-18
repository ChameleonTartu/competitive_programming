#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define A(vector_) vector_.begin(), vector_.end()

void read_vector(vector<int>& v, int size) {
	for (int i = 0; i < size; ++i)
		cin >> v[i];
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int professor_number_of_dates; cin >> professor_number_of_dates;
	vector<int> professor(professor_number_of_dates);
	read_vector(professor, professor_number_of_dates);
	
	int student_number_of_dates; cin >> student_number_of_dates;
	vector<int> student(student_number_of_dates);
	read_vector(student, student_number_of_dates);

	sort(A(student));

	int student_iterator = 0, professor_iterator = 0, occurance = 0;
	while (student_iterator < student.size() && professor_iterator < professor.size()) {
		if (student[student_iterator] < professor[professor_iterator]) {
			++student_iterator;
			continue;
		}
		else if (student[student_iterator] > professor[professor_iterator]){
			++professor_iterator;
			continue;
		}
		else {
			++occurance, ++student_iterator;
		}
	}

	cout << occurance << endl;
	return 0;
}