#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
	int cnt, tmp;
	string num;
	int ans[3];
	for (int i = 0; i < 3; i++) {
		cin >> num;
		cnt = 1;
		tmp = 1;
		for (int j = 0; j < 7; j++) {
			if (num.at(j) == num.at(j+1)) {
				tmp++;
				if (cnt < tmp) {
					cnt = tmp;
				}
			}
			else {
				tmp = 1;
			}
		}

		ans[i] = cnt;
	}

	for (int i = 0; i < 3; i++) {
		cout << ans[i] << "\n";
	}
}
