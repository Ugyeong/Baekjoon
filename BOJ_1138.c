#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, input, cnt, j;
	scanf("%d", &N);
	int person[10] = { 0, };
	
	for (int i = 1; i <= N; i++) {
		cnt = 0;
		j = 0;

		scanf("%d", &input);

		while (cnt != input) {
			if (person[j++] == 0) cnt++;
		}
		while (person[j] != 0)
			j++;

		person[j] = i;
	}
	
	for (int i = 0; i < N; i++) {
		printf("%d ", person[i]);
	}

	return 0;
}
