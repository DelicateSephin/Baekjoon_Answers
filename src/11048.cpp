#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> arr(n+1);

	for (int i = 0; i < n; i++) {

		vector<int> temp(m + 1, 0);
		for (int j = 0; j < m; j++) cin >> temp[j + 1];
		arr[i + 1] = temp;

	}
	arr[0] = vector<int>(m + 1, 0);

	int min;
	n > m ? min = m : min = n;
	vector<vector<int>> answer(arr);
	for (int i = 1; i <= min; i++) {
		for (int j = i; j <= m; j++) {
			answer[i - 1][j] > answer[i][j - 1] ? answer[i][j] = arr[i][j] + answer[i - 1][j] : answer[i][j] = arr[i][j] + answer[i][j - 1];
		}
		for (int j = i; j <= n; j++) {
			answer[j - 1][i] > answer[j][i - 1] ? answer[j][i] = arr[j][i] + answer[j - 1][i] : answer[j][i] = arr[j][i] + answer[j][i - 1];
		}
	}

	cout << answer[n][m] << endl;

	return 0;
}