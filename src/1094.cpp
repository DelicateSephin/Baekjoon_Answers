#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	int sum = 0;
	int cnt = 0;
	int stick[] = { 64,32,16,8,4,2,1 };

	for (auto y : stick) {
		if (sum == x) break;
		if ((sum + y) <= x) {
			sum += y;
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}