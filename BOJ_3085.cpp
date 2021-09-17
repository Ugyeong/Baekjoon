#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char candy[51][51];
int num, count = 0, maxcandy = 1;
void find();
int max(int a, int b);
void swap(char *a, char *b);

int main() {
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("\n");
		for (int j = 0; j < num; j++) {
			scanf("%c", &candy[i][j]);
		}
	}
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - 1; j++) {
			swap(&candy[j][i], &candy[j + 1][i]);
			find();
			swap(&candy[j][i], &candy[j + 1][i]);
		}
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - 1; j++) {
			swap(&candy[j][i], &candy[j][i + 1]);
			find();
			swap(&candy[j][i], &candy[j][i + 1]);
		}
	}

	printf("%d", count);
	return 0;
}

void find()
{
	for (int i = 0; i < num; i++) {
		maxcandy = 1;
		for (int j = 0; j < num; j++) {
			if (candy[i][j]==candy[i][j+1]) {
				maxcandy++;
			}
			else {
				count = max(maxcandy, count);
				maxcandy = 1;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		maxcandy = 1;
		for (int j = 0; j < num; j++) {
			if (candy[j][i] == candy[j + 1][i]) {
				maxcandy++;
			}
			else {
				count = max(maxcandy, count);
				maxcandy = 1;
			}
		}
	}
}

int max(int a, int b)
{
	return a > b ? a : b;
}

void swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
