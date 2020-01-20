#include <iostream>

using namespace std;

int getResult(const int n)
{
	switch (n % 5) {
	case 0:
		return n / 5;
	case 1:
		return (n - 6) / 5 + 2;
	case 2:
		if (n == 7)
			return -1;
		else
			return (n - 12) / 5 + 4;
	case 3:
		return (n / 5) + 1;
	case 4:
		if (n == 4)
			return -1;
		else
			return (n - 9) / 5 + 3;
	}
}

int main()
{
	int n;

	cin >> n;
	cout << getResult(n) << endl;

	return 0;
}