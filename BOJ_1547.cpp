#include<iostream>
#include<string>
using namespace std;

int main()
{
	string tmp1, tmp2;
	string ans = "1";
	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> tmp1 >> tmp2;
		if (tmp1 == ans) {
			ans = tmp2;
		}
		else if (tmp2 == ans) {
			ans = tmp1;
		}
	}
	cout << ans;
}
