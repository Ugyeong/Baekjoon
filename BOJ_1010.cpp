#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
	int T, N, M;
	long double ans;
	cin >> T;
	for (int i = 0; i < T; i++) {
		ans = 1;
		cin >> N >> M;
		for (int j = 0; j < N; j++) {
			ans *= (M - j);
			ans /= (j + 1);
		}
		cout << (int)ans << "\n";
	}
}
