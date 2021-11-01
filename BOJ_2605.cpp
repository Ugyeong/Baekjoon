#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int num = 0, tmp;
	cin >> num;

	stack<int>stu;
	stack<int>stu2;

	cin >> tmp;
	stu.push(1);

	for (int i = 1; i < num; i++) {
		cin >> tmp;
		for (int j = 0; j < tmp; j++) {
			stu2.push(stu.top());
			stu.pop();
		}
		stu.push(i+1);
		for (int k = 0; k < tmp; k++) {
			stu.push(stu2.top());
			stu2.pop();
		}
	}

	while (!stu.empty()) {
		stu2.push(stu.top());
		stu.pop();
	}

	while (!stu2.empty()) {
		cout << stu2.top() << " ";
		stu2.pop();
	}
}
