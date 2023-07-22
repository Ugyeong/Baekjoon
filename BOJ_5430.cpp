#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int AC[100002] = {0,};
		string p, x, tmp = "";
		int n, k = 0;

		cin >> p >> n >> x;

		int error = 0, start = 0, end = n - 1;
		int dir = 0; //1일 경우 역방향

		if (x.length() > 2) { //[]가 아닐경우에만 입력 진행
			for (int j = 1; j < x.length(); j++) {
				if (x.at(j) == ',' || x.at(j) == ']') {
					AC[k++] = stoi(tmp);
					tmp = "";
				}
				else {
					tmp += x.at(j);
				}
			}
		}

		for (int j = 0; j < p.length(); j++) {
			if (p.at(j) == 'R') {
				if (dir == 0) dir = 1;
				else dir = 0;
			}
			else if (p.at(j) == 'D') { //start와 end를 조절해서 출력값을 정함
				if (end < start) {
					error = 1;
					break;
				}
				if (dir == 0) start++;
				else end--;
			}
		}

		if (error == 1) cout << "error" << "\n";
		else {
			cout << "[";
			if (end >= start) { //n가 0이어서 end가 -1이 되는 경우를 제외함
				if (dir == 0) {

					for (int j = start; j < end; j++) {
						cout << AC[j] << ",";
					}
					cout << AC[end];
				}
				else {
					for (int j = end; j > start; j--) {
						cout << AC[j] << ",";
					}
					cout << AC[start];
				}
			}
			cout << "]" << "\n";
		}
	}
}
