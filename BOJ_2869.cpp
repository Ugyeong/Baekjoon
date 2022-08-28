#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
	int A, B, V, day, m = 0;
	cin >> A >> B >> V;

	if ((V-A) % (A - B) == 0) {
		day = (V - A) / (A - B) + 1;
	}
	else {
		day = (V - A) / (A - B) + 2;
	}

	cout << day;
}
