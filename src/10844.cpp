#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int mod = 1000000000;
	int n;
	cin >> n;

	int list[100][10];

	list[0][0] = 0;
	for (int i = 1; i <= 9; i++)
		list[0][i] = 1;

	for (int i = 1; i < n; i++) {
		list[i][0] = list[i - 1][1] % mod;
		list[i][9] = list[i - 1][8] % mod;
		for (int j = 1; j <= 8; j++) {
			list[i][j] = (list[i - 1][j - 1] + list[i - 1][j + 1]) % mod;
		}
	}

	int sum = 0;
	for (auto x : list[n - 1]) {
		sum += x;
		sum %= mod;
	}

	cout << sum << endl;
	
	return 0;
}