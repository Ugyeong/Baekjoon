#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int first = 0, second = 0, N;
	int first_h = 0, first_m = 0, second_h = 0, second_m = 0;
	string fin_first_h, fin_first_m, fin_second_h, fin_second_m;
	cin >> N;
	string tmp;
	int point[100][3] = {};

	for (int i = 0; i < N; i++) {
		cin >> point[i][0] >> tmp;
		point[i][1] = stoi(tmp.substr(0, 2));
		point[i][2] = stoi(tmp.substr(3, 2));
	}

	for (int i = 0; i < N-1; i++) {
		if (point[i][0] == 1) first++;
		else second++;

		if (first > second ) {
			first_m += (point[i + 1][1] * 60 + point[i + 1][2]) - (point[i][1] * 60 + point[i][2]);
		}
		else if (first < second) {
			second_m += (point[i + 1][1] * 60 + point[i + 1][2]) - (point[i][1] * 60 + point[i][2]);
		}
	}

	//종료전까지의 시간 구하기
	if (point[N-1][0] == 1) first++;
	else second++;
	if (first > second) {
		first_m += 2880 - (point[N - 1][1] * 60 + point[N - 1][2]);
	}
	else if (first < second) {
		second_m += 2880 - (point[N - 1][1] * 60 + point[N - 1][2]);
	}

	if (first_m >= 60) {
		first_h += first_m / 60;
		first_m %= 60;
	}

	if (second_m >= 60) {
		second_h += second_m / 60;
		second_m %= 60;
	}

	cout.width(2);
	cout.fill('0');
	cout << first_h << ":";
	cout.width(2);
	cout.fill('0');
	cout << first_m << "\n";
	cout.width(2);
	cout.fill('0');
	cout << second_h << ":";
	cout.width(2);
	cout.fill('0');
	cout << second_m << "\n";
}
