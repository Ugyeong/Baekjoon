#include<iostream>
#include<string>
using namespace std;

int main()
{
	int A, B, C;
	string result;
	int num[10] = {0,};
	cin >> A >> B >> C;

	result = to_string((A*B)*C);

	for (int i = 0; i < result.length(); i++) {
		switch (result[i]) {
		case '0':
			num[0]++;
			break;
		case '1':
			num[1]++;
			break;
		case '2':
			num[2]++;
			break;
		case '3':
			num[3]++;
			break;
		case '4':
			num[4]++;
			break;
		case '5':
			num[5]++;
			break;
		case '6':
			num[6]++;
			break;
		case '7':
			num[7]++;
			break;
		case '8':
			num[8]++;
			break;
		case '9':
			num[9]++;
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << "\n";
	}

	return 0;
}
