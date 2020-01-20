#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int coin[] = { 500, 100 , 50 , 10 , 5 , 1 };
	int change = 1000 - n;

	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		while (true) {
			if (coin[i] > change)
				break;
			else {
				change -= coin[i];
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}