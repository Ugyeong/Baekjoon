#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S;
	int T = 0, R = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> R;
		cin >> S;

		for (int j = 0; j < S.length(); j++) {
			for (int k = 0; k < R; k++) {
				cout << S[j];
			}
		}
		cout << "\n";
	}
}
