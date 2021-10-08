#include<iostream>
#include<string>
using namespace std;

int main()
{	
	string sen;
	int num;

	while (1) {
		getline(cin, sen);
		num = 0;

		if (sen == "#") {
			break;
		}

		for (int i = 0; i < sen.length(); i++) {
			if (sen[i] == 'a'|| sen[i] == 'e'|| sen[i] == 'i'|| sen[i] == 'o'|| sen[i] == 'u'||
				sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U') {
				num++;
			}
		}
		cout << num << "\n";
	}
}
