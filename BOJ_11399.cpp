#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

int main(void) {
	int N, P[1001] = { 0, }, sum = 0, tmp = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}
	sort(P, P + N);

	tmp = P[0];
	for (int i = 1; i < N; i++) {
		sum += tmp;
		tmp += P[i];
	}
	sum += tmp;
	cout << sum;
}
