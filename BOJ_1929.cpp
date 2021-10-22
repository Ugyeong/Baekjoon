#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int M, N, k;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		k = (int)sqrt(double(i));
		if (i == 3 || i==2) {
			cout << i << "\n";
		}

		for (int j = 2; j <= k; j++) {
			if (i%j == 0) {
				break;
			}
			if (j == k) {
				cout << i << "\n";
			}
		}
	}
}
