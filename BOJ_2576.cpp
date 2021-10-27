#include<iostream>
using namespace std;

int main()
{
	int sum = 0, min = 100, tmp;

	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		if (tmp % 2 == 1) {
			sum += tmp;
			if (tmp < min) {
				min = tmp;
			}
		}
	}
	
	if (sum == 0) {
		cout << "-1";
	}
	else {
		cout << sum << "\n" << min;
	}

	return 0;
}
