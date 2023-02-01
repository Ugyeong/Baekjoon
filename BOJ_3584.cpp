#include<iostream>
#include<algorithm>
using namespace std;

int parent[10001];
bool visit[10001];
int T, N, A, B, AA, BB;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;

	for (int p = 0; p < T; p++) {
		cin >> N;

		for (int i = 1; i <= N; i++) {
			visit[i] = false;
			parent[i] = i;
		}
		
		for (int i = 0; i < N - 1; i++) {
			cin >> A >> B;
			parent[B] = A;
		}

		cin >> AA >> BB;
		visit[AA] = true;

		while (AA != parent[AA]) {
			AA = parent[AA];
			visit[AA] = true;
		}

		while (true) {
			if (visit[BB]) {
				cout << BB << "\n";
				break;
			}
			BB = parent[BB];
		}
	}
}
