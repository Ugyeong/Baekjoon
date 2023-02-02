#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, P, mid;
	while (1) {
		scanf("%d", &N);
		if (N == 0) return 0;
		scanf("%d", &P);
		
		mid = N / 2;

		if (P > mid) {
			if (P % 2 == 0) {
                printf("%d %d %d", N - P + 1, N - P + 2, P - 1);
			}
			else {
                printf("%d %d %d", N - P, N - P + 1, P + 1);
			}
		}
		else {
			if (P % 2 == 0) {
                printf("%d %d %d", P - 1, N - P + 1, N - P + 2);
			}
			else {
                printf("%d %d %d", P + 1, N - P, N - P + 1);
			}
		}
		printf("\n");		
	}
}
