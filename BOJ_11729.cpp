#include<iostream>
#include<cmath>
using namespace std;

void hanoi_tower(int n, int from, int tmp, int to)
{
	if (n == 1)
	{
		cout << from <<" "<< to << "\n";
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		cout << from <<" "<< to << "\n";
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main()
{
	int n = 0;
	cin >> n;

	cout << (int)pow(2, n) - 1 << "\n";
	hanoi_tower(n, 1, 2, 3);
}
