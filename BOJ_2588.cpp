#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, bb = 0, bbb = 0;
	cin >> a >> b;

	bb = b / 100;
	bbb = b % 100;

	cout << a * (bbb % 10) << "\n";
	cout << a * (bbb / 10) << "\n";
	cout << a * bb << "\n";
	cout << a * b << "\n";
}
