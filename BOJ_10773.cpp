#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int k, num, sum = 0, size;
	stack<int> stack;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> num;
		if (num == 0) {
			stack.pop();
		}
		else {
			stack.push(num);
		}
	}
	
	size = stack.size();
	for (int i = 0; i < size; i++) {
		sum += stack.top();
		stack.pop();
	}

	cout << sum;

}
