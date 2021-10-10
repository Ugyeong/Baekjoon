#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int score[1000];

	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
	}

	double M = score[0];
	for (int i = 0; i < n; i++)
	{
		if (score[i] > M)
			M = score[i];
	}

	double sum = 0.0;
	for (int i = 0; i < n; i++)
	{
		sum += (score[i] / M * 100);
	}
	cout << sum / n;
}
