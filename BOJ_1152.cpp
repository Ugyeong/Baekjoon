#include<iostream>
#include<string>
using namespace std;

int main()
{
	string sen;
	int num = 0;
	getline(cin, sen);

	for (int i = 0; i < sen.length(); i++) {
		if (sen[i] == ' ') {
			num++;
		}
	}
	if (sen[0] == ' ') {
		num--;
	}
	if (sen[sen.length()-1] == ' ') {
		num--;
	}


	cout << num + 1;
}
