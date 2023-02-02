#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int num;
	cin >> num;

	string tmp;

	for (int i = 0; i < num; i++) {
		stack<char> a;
		cin >> tmp;

		for (int j = 0; j < tmp.length(); j++) {
			if (a.empty() || tmp[j] == '(') {
				a.push(tmp[j]);
			}
			else if (a.top() == '(') {
				a.pop();
			}
		}
		
		if (a.empty()) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}

	return 0;
}
