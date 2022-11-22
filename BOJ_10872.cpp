#include<iostream>
#include<string>
using namespace std;

int main()
{
	int A = 0, sum = 1;
	cin >> A;

	for (int i = 1; i <= A; i++) {
		sum *= i;
	}
	cout << sum;

	return 0;
}
