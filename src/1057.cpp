#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, p1, p2;
	cin >> n >> p1 >> p2;

	if (p1 > p2) {
		int temp = p1;
		p1 = p2;
		p2 = temp;
	}

	int round = 1;
	while (true) {
		if (p2 == (p1 + 1) and p1 % 2 == 1) {
			break;
		}
		n = n / 2 + n % 2;
		p1 = p1 / 2 + p1 % 2;
		p2 = p2 / 2 + p2 % 2;
		round++;
	}

	cout << round << endl;

	return 0;
}