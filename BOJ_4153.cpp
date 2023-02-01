#include<iostream>
using namespace std;

int main()
{
	int length[3] = { 0, };
	int stop = 0;

	while (stop==0)
	{
		cin >> length[0] >> length[1] >> length[2];

		int a = length[0];
		int b = length[1];
		int c = length[2];

		if (a == 0)
		{
			stop = 1;
			break;
		}

		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
}
