#include <iostream>

using namespace std;

struct Year {

	bool operator != (const Year& year) { if (E != year.E or S != year.S or M != year.M) return true; else return false; }
	Year& operator++(int) { this->E++; this->S++; this->M++; if (E == 16) E = 1; if (S == 29) S = 1; if (M == 20) M = 1; return *this; }

	int E;
	int S;
	int M;
};

int main()
{
	Year year;
	cin >> year.E >> year.S >> year.M;

	Year now{ 1,1,1 };
	int cnt = 1;

	while (now != year) {
		now++;
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}