#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	int wine[10001];
	int dp[100001];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> wine[i];
	}

	dp[0] = wine[0] = 0;
	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];


	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i-1],max(dp[i-3]+wine[i-1]+wine[i],dp[i-2]+wine[i]));
	}

	cout << dp[n];
}
