#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
	int N, M, min = 2000, btmp, wtmp, xidx, yidx;
	string store;
	char black[8][8] = {
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'}
	};
	char white[8][8] = {
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W' }
	};
	char test[50][50] = {};

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> test[i];
	}



	for (int a = 0; a < N - 7; a++) {
		for (int b = 0; b < M - 7; b++) {
			btmp = 0;
			wtmp = 0;
			xidx = 0;
			yidx = 0;
			for (int x = 0; x < 8; x++) {
				for (int y = 0; y < 8; y++) {
					if (yidx == 8) {
						xidx++;
						yidx = 0;
					}
					if (test[a + x][b + y] != black[xidx][yidx]) {
						btmp++;
					}
					if (test[a + x][b + y] != white[xidx][yidx++]) {
						wtmp++;
					}
				}
			}
			if (btmp <= wtmp && btmp < min) {
				min = btmp;
			}
			if (wtmp < btmp && wtmp < min) {
				min = wtmp;
			}
		}
	}


cout << min;

}
