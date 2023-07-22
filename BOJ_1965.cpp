#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n, max = 0;
	cin >> n;

	int* box = (int*)malloc(sizeof(int)*n);
	int* arr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		cin >> box[i];
		arr[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (box[j] < box[i] && arr[i] < arr[j] + 1) {
				arr[i] = arr[j] + 1;
			}
		}
		if (max < arr[i]) max = arr[i];
	}
	
	cout << max;

	free(box);
	free(arr);

}
