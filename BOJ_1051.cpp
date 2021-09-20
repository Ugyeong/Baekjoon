#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int len = 1;
	int square[50][50] = { 0, };
	int N = 0, M = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;

		for (int j = 0; j < input.size(); j++)
		{
			square[i][j] = input[j] - '0';
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int k = 1; k < min(N, M); k++)
			{
				if (i + k < N && j + k < M && square[i][j] == square[i][j + k] && square[i][j]
					== square[i + k][j] && square[i][j] == square[i + k][j + k])
				{
					len = max(len, k + 1);
				}
			}
		}
	}

	int answer = len * len;
	cout << answer;
}
