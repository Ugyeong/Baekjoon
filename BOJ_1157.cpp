#include<iostream>
#include<string>
using namespace std;

int main()
{
	string word;
	cin >> word;

	int alpha[26] = { 0, };
	int max = 0;
	int index = 0;
	int count = 0;

	for (int i = 0; i < word.length(); i++)
	{
		int n = word[i];
		if (n < 97)
			alpha[n - 65]++;
		else
			alpha[n - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max) {
			max = alpha[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alpha[i] == max) {
			count++;
			if (count >= 2) {
				cout << "?";
				return 0;
			}
		}
	}

	cout << (char)(index + 65);
}
