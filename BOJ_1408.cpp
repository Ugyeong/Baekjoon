#include<iostream>
#include<string>
using namespace std;

int main()
{
	int hour = 0, min = 0, sec = 0;
	int A, B, C, AA, BB, CC, nowsec, startsec, time;

	string now;
	string start;

	cin >> now >> start;

	A = stoi(now.substr(0, 2));
	B = stoi(now.substr(3, 2));
	C = stoi(now.substr(6, 2));

	AA = stoi(start.substr(0, 2));
	BB = stoi(start.substr(3, 2));
	CC = stoi(start.substr(6, 2));

	
	nowsec = A * 3600 + B * 60 + C;
	startsec = AA * 3600 + BB * 60 + CC;

	time = startsec - nowsec;
	if (time < 0) {
		time += 24 * 3600;
	}

	hour = time / 3600;
	min = (time % 3600) / 60;
	sec = time % 60;

	printf("%02d:%02d:%02d", hour, min, sec);

	return 0;

}
