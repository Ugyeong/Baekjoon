#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main(void) {
	int T, N, M, cnt, tmp, sig, qchk, size = 0;
	bool flag = true;
	cin >> T;
	queue<int> q;
	queue<int> qq;
	queue<int> find;
	for (int i = 0; i < T; i++) {
		cnt = 0;
		qchk = 0;
		flag = true;
		cin >> N >> M;
		q = queue<int>();
		qq = queue<int>();
		find = queue<int>();
		for (int j = 0; j < N; j++) {
			cin >> tmp;
			if (j == M) {
				find.push(1);
			}
			else {
				find.push(0);
			}
			q.push(tmp);
		}

		while (flag) {
			if (qchk == 0) {
				sig = 0;
				tmp = q.front();
				q.pop();
				size = q.size();
				for (int j = 0; j < size; j++) {
					qq.push(q.front());
					if (q.front() > tmp) {
						sig = 1;
					}
					q.pop();
				}
				if (sig == 1) {
					qq.push(tmp);
					find.push(find.front());
					find.pop();
				}
				else {
					if (find.front()==1) { flag = false; }
					cnt++;
					find.pop();
				}

				qchk = 1;
			}
			else {
				sig = 0;
				tmp = qq.front();
				qq.pop();
				size = qq.size();
				for (int j = 0; j < size; j++) {
					q.push(qq.front());
					if (qq.front() > tmp) {
						sig = 1;
					}
					qq.pop();
				}
				if (sig == 1) {
					q.push(tmp);
					find.push(find.front());
					find.pop();
				}
				else {
					if (find.front()==1) { flag = false; }
					cnt++;
					find.pop();
				}

				qchk = 0;
			}
		}


		cout << cnt << "\n";
	}
}
