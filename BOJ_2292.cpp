#include<iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	int m = 1, k = 1;

	for (int i = 0; i < 1000000000; i++) {
		if (i == 0) {
			m += 1;
		}
		else {
			m += 6 * i;
			k++;
		}

		if (m > N) {
			break;
		}
		else if (m == N) {
			k++;
			break;
		}
	}

	cout << k << "\n";

}
