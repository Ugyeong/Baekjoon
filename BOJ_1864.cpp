#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int change(char str);

int main()
{	
	string sen;
	int num;
	double pownum;

	while (1) {
		getline(cin, sen);
		num = 0;
		pownum = 0;

		if (sen == "#") {
			break;
		}

		for (int i = 0; i < sen.length(); i++) {
			int chnum = change(sen[i]);
			pownum = pow(8, sen.length() - (i+1));
			num += chnum * (int)pownum;
		}

		cout << num << "\n";
	}
}

int change(char str) {
	int ch;

	if (str == '-') {
		ch = 0;
	}
	else if (str == '\\'){
		ch = 1;
	}
	else if (str == '(') {
		ch = 2;
	}
	else if (str == '@') {
		ch = 3;
	}
	else if (str == '?') {
		ch = 4;
	}
	else if (str == '>') {
		ch = 5;
	}
	else if (str == '&') {
		ch = 6;
	}
	else if (str == '%') {
		ch = 7;
	}
	else if (str == '/') {
		ch = -1;
	}

	return ch;
}
