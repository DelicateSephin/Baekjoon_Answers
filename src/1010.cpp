#include <iostream>
#include <vector>

using namespace std;

int func(int n, int m)
{
	static int arr[30][30] = {};

	if (arr[n][m] == 0) {
		if (n == 0 or m == 0) arr[n][m] = 0;
		else if (n == m) arr[n][m] = 1;
		else if (n == 1) arr[n][m] = m;
		else {
			int temp = 0;
			for (int i = 0; i <= m - n; i++) {
				temp += func(n - 1, m - i - 1);
			}
			arr[n][m] = temp;
		}
	}

	return arr[n][m];
}

int main()
{
	int T;
	cin >> T;

	vector<int> arr(T);
	for (int i = 0; i < T; i++) {
		int n, m;
		cin >> n >> m;
		arr[i] = func(n, m);
	}

	for (auto x : arr)
		cout << x << endl;

	return 0;
}