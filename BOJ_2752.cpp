#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	int tmp = 0;
	cin >> a >> b >> c;

	if (a > b) {
		tmp = b;
		b = a;
		a = tmp;
	}
	if (b > c) {
		tmp = c;
		c = b;
		b = tmp;
	}
	if (a > b) {
		tmp = b;
		b = a;
		a = tmp;
	}

	cout << a << " " << b << " " << c;

}
