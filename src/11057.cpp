#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[1001][10] = { 0, };

	for (int j = 0; j <= 9; j++) {
		arr[1][j] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int k = 0; k <= 9; k++) {
			for (int j = k; j <= 9; j++) {
				arr[i][j] += arr[i - 1][k];
				arr[i][j] %= 10007;
			}
		}
	}

	int sum = 0;
	for (auto x : arr[n]) {
		sum += x;
		sum %= 10007;
	}

	cout << sum << endl;

	return 0;
}