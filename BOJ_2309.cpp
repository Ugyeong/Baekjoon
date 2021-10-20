#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int height[9] = {}, sum = 0, remain, tmp;
	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		sum += height[i];
	}

	remain = sum - 100;

	sort(height, height + 9);

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if ((height[i] + height[j]) == remain) {
				height[i] = 0;
				height[j] = 0;
				for (int k = 0; k < 9; k++) {
					if (height[k] != 0) {
						cout << height[k] << "\n";
					}
				}
				return 0;
			}
		}
	}
}
