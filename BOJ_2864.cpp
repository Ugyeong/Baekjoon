#include<iostream>
#include<string>
using namespace std;

int main() {
	int max, min;
	string A, B;
	cin >> A >> B;

	for (int i = 0; i < A.length(); i++) {
		if (A.at(i) == '6') {
			A.at(i) = '5';
		}
	}

	for (int i = 0; i < B.length(); i++) {
		if (B.at(i) == '6') {
			B.at(i) = '5';
		}
	}
	
	min = stoi(A) + stoi(B);

	for (int i = 0; i < A.length(); i++) {
		if (A.at(i) == '5') {
			A.at(i) = '6';
		}
	}

	for (int i = 0; i < B.length(); i++) {
		if (B.at(i) == '5') {
			B.at(i) = '6';
		}
	}

	max = stoi(A) + stoi(B);

	cout << min << " " << max;
	
}
