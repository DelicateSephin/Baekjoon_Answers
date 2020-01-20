#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt = 0;
	int now = n;
	do {
		int temp = ((now / 10) + (now % 10)) % 10 + ((now % 10) * 10);
		now = temp;
		cnt++;
	} while (now != n);

	cout << cnt << endl;

	return 0;
}