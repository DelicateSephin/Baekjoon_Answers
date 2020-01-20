#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int n;
	int i = a;
	int j = b;
	while (true) {
		if (a < b) {
			int temp = a;
			a = b;
			b = temp;
		}

		if (a%b == 0) {
			n = b;
			break;
		}
		else {
			a %= b;
		}
	}

	cout << n << endl;
	cout << i * j / n << endl;

	return 0;
}