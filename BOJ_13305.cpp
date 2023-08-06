#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long N;
	cin >> N;

	long long n = N - 1;

	vector<long long> city, distance;

	long long until = n, total = 0, min_index = 0, input;

	for (int i = 0; i < n; i++) {
		cin >> input;
		distance.push_back(input);
	}
	for (int i = 0; i < n; i++) {
		cin >> input;
		city.push_back(input);
	}
	cin >> input;

	for (int i = 0; i < N - 1; i++) {
		if (city[min_index] > city[i]) {
			min_index = i;
		}
		total += city[min_index] * distance[i];
	}
	cout << total;
}
