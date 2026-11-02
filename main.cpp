#include <iostream>

using namespace std;

void get_weekly_steps(int* steps, char* days, int numDays) {
	if (steps == nullptr || days == nullptr) {
		return;
	}

	for (int i = 0; i < numDays; i++){
		cout << days[i] << ": ";
		cin >> steps[i];
	}
	cout << "\n";
}

double get_total(int* steps, int numDays) {
	double total = 0;

	if (steps) {
		for (int i = 0; i < numDays; i++) {
			total += steps[i];
		}
	}
	return total;
}

int main() {

	const int numDays = 7;
	char days[] = "MTWTFSS";
	int steps[numDays] = {0};

	cout << "Welcome To The Weekly Step Counter Program\n"
		<< "Please Fill Out Your Steps For The Week:\n";

	get_weekly_steps(steps, days, numDays);
	double total = get_total(steps, numDays);
	double avg = total / numDays;

	cout << "Total Steps For The Week: " << total << '\n'
		<< "Average Daily Steps: " << avg << '\n';

	return 0;
}
