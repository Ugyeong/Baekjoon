#include<iostream>
using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	cin >> A >> B;

	if (A > B) {
		cout << ">";
	}
	else if (A == B) {
		cout << "==";
	}
	else {
		cout << "<" << endl;
	}
}
