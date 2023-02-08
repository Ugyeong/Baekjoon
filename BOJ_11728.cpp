#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int n = 0, m = 0;
	cin >> n >> m;

	int A[1000001];
	int B[1000001];
	int C[2000002];

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> B[i];
	}

	int p = 0;
	int q = 0;
	int r = 0;

	while (p < n && q < m)
	{
		if (A[p] < B[q])
		{
			C[r++] = A[p++];
		}
		else
		{
			C[r++] = B[q++];
		}
	}
	while (p < n)
	{
		C[r++] = A[p++];
	}

	while (q < m)
	{
		C[r++] = B[q++];
	}

	for (int i = 0; i< n + m; i++)
	{
		cout << C[i] << " ";
	}
}
