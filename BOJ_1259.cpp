#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num;
	int result;
	int mid = 0;

	while (1) {
		getline(cin, num);
		result = 0;

		if (num == "0") {
			break;
		}

		mid = num.length() / 2;

		for (int i = 0; i < mid; i++) {
			if (num[0 + i] != num[num.length()-(1+i)]) {
				result = 1;
				break;
			}
		}

		if (result == 0) {
			cout << "yes" << "\n";
		}
		else if (result == 1) {
			cout << "no" << "\n";
		}

	}
}
