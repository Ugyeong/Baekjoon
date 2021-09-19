#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b);

int main() {
	long long arr[1023];
	int num;
	scanf("%d", &num);

	if (num >= 1023) {
		printf("-1");
		return 0;
	}
	
	for (int i = 1; i <= 1023; i++) {
		long long dec = 0;
		int tmp = i;
		for (int j = 9; j >= 0; j--) {
			if (tmp % 2 == 1) {
				dec = 10 * dec + j;
			}
			tmp /= 2;
		}
		arr[i-1]=dec;
	}
	qsort(arr, 1023, sizeof(arr[0]), compare);

	printf("%lld", arr[num]);
}

int compare(const void * a, const void * b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}
