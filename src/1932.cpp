#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> list(n);
	vector<vector<int>> answer(n);
	for (int i = 0; i < n; i++) {
		list[i].assign(i + 1, 0);
		answer[i].assign(i + 1, 0);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cin >> list[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		answer[n - 1][i] = list[n - 1][i];
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			answer[n - 1 - i][j] = list[n - 1 - i][j] + (answer[n - i][j] > answer[n - i][j + 1] ? answer[n - i][j] : answer[n - i][j + 1]);
		}
	}

	cout << answer[0][0] << endl;

	return 0;
}