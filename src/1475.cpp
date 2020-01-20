#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 0) cout << 1 << endl;
	else {
		int cnt[9] = {};
		while (n > 0) {
			int temp = n % 10;
			n /= 10;
			if (temp == 6 or temp == 9) cnt[6] += 1;
			else cnt[temp] += 2;
		}

		int max = 0;
		for (auto x : cnt)
			if (x > max) max = x;
		cout << (max / 2) + (max % 2) << endl;
	}

	return 0;
}