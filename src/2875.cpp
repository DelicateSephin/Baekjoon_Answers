#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	int cnt = 0;
	while (true) {
		n -= 2;
		m -= 1;
		cnt++;
		if ((n + m) < k or n < 0 or m < 0) {
			cnt--;
			break;
		}
	}
	if (cnt < 0)
		cnt = 0;

	cout << cnt << endl;

	return 0;
}