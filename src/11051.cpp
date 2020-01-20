#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<vector<int>> arr(n + 1);

	arr[0] = vector<int>{ 0 };
	arr[1] = vector<int>{ 1,1 };

	for (int i = 2; i <= n; i++) {
		vector<int> temp(i + 1);
		temp[0] = 1;
		for (int j = 1; j < i; j++) {
			temp[j] = arr[i - 1][j - 1] + arr[i - 1][j];
			temp[j] %= 10007;
		}
		temp[i] = 1;
		arr[i] = temp;
	}

	cout << arr[n][k] << endl;

	return 0;
}