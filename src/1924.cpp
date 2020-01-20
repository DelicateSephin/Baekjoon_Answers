#include <iostream>

using namespace std;

enum Days {
	Jan = 31,
	Feb = 28,
	Mar = 31,
	Apr = 30,
	May = 31,
	Jun = 30,
	Jul = 31,
	Aug = 31,
	Sep = 30,
	Oct = 31,
	Nov = 30,
	Dec = 31
};

// Total Days Before This Month
enum TDBTM {
	JAN = 0,
	FEB = Jan,
	MAR = FEB + Feb,
	APR = MAR + Mar,
	MAY = APR + Apr,
	JUN = MAY + May,
	JUL = JUN + Jun,
	AUG = JUL + Jul,
	SEP = AUG + Aug,
	OCT = SEP + Sep,
	NOV = OCT + Oct,
	DEC = NOV + Nov
};

void printAnswer(const int month, const int day)
{
	int totalDays = day;

	switch (month) {
	case 1:
		totalDays += JAN;
		break;
	case 2:
		totalDays += FEB;
		break;
	case 3:
		totalDays += MAR;
		break;
	case 4:
		totalDays += APR;
		break;
	case 5:
		totalDays += MAY;
		break;
	case 6:
		totalDays += JUN;
		break;
	case 7:
		totalDays += JUL;
		break;
	case 8:
		totalDays += AUG;
		break;
	case 9:
		totalDays += SEP;
		break;
	case 10:
		totalDays += OCT;
		break;
	case 11:
		totalDays += NOV;
		break;
	case 12:
		totalDays += DEC;
		break;
	}

	switch (totalDays % 7) {
	case 1:
		cout << "MON" << endl;
		return;
	case 2:
		cout << "TUE" << endl;
		return;
	case 3:
		cout << "WED" << endl;
		return;
	case 4:
		cout << "THU" << endl;
		return;
	case 5:
		cout << "FRI" << endl;
		return;
	case 6:
		cout << "SAT" << endl;
		return;
	case 0:
		cout << "SUN" << endl;
		return;
	}
}

int main()
{
	int month, day;

	cin >> month >> day;

	printAnswer(month, day);

	return 0;
}