#include<iostream>
#include<queue>
#include<string>
using namespace std;

int check(int bingo[][5],int a);

int main()
{
	int bingo[5][5] = {};
	queue<int> sound;
	int count = 0, tmp;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> bingo[i][j];
		}
	}

	for (int i = 0; i < 25; i++) {
		cin >> tmp;
		sound.push(tmp);
	}

	for (int i = 0; i < 25; i++) {
		tmp = sound.front();
		sound.pop();
		count++;
		if (check(bingo, tmp) == 1) {
			break;
		}
	}

	cout << count;

	return 0;
}

int check(int bingo[][5],int a) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (bingo[i][j] == a) {
				bingo[i][j] = 0;
			}
		}
	}

	int line = 0;
	for (int i = 0; i < 5; i++) {
		if (bingo[i][0] == 0 && bingo[i][1] == 0 && bingo[i][2] == 0 && bingo[i][3] == 0 && bingo[i][4] == 0) {
			line++;
			if (line == 3) { return 1; }
		}	
	}

	for (int i = 0; i < 5; i++) {
		if (bingo[0][i] == 0 && bingo[1][i] == 0 && bingo[2][i] == 0 && bingo[3][i] == 0 && bingo[4][i] == 0) {
			line++;
			if (line == 3) { return 1; }
		}
	}

	if (bingo[2][2] == 0) {
		if (bingo[0][0] == 0 && bingo[1][1] == 0 && bingo[3][3] == 0 && bingo[4][4] == 0) {
			line++;
			if (line == 3) { return 1; }
		}
		if (bingo[0][4] == 0 && bingo[1][3] == 0 && bingo[3][1] == 0 && bingo[4][0] == 0) {
			line++;
			if(line == 3) { return 1; }
		}
	}

	if (line == 3) {
		return 1;
	}
	else {
		return 0;
	}
}
