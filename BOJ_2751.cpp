#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a = 0, tmp;
	cin >> a;

	vector<int> num;
	for (int i = 0; i < a; i++) {
		cin >> tmp;
		num.push_back(tmp);
	}

	sort(num.begin(), num.end());
	for (int i = 0; i < a; i++) {
		cout << num[i] << "\n";
	}

	return 0;
}
