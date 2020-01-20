#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin >> T;

	vector<int> answer;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;

		vector<int> arr1(n);
		vector<int> arr2(n);
		for (int j = 0; j < n; j++) cin >> arr1[j];
		for (int j = 0; j < n; j++) cin >> arr2[j];

		vector<int> temp1(n);
		vector<int> temp2(n);
		temp1[0] = arr1[0];
		temp2[0] = arr2[0];
		temp1[1] = temp2[0] + arr1[1];
		temp2[1] = temp1[0] + arr2[1];
		for (int j = 2; j < n; j++) {
			int max1, max2;
			if (temp1[j - 2] > temp2[j - 2]) {
				max1 = temp1[j - 2];
				max2 = temp1[j - 2];
			}
			else {
				max1 = temp2[j - 2];
				max2 = temp2[j - 2];
			}
			if (temp2[j - 1] > max1) max1 = temp2[j - 1];
			if (temp1[j - 1] > max2) max2 = temp1[j - 1];
			temp1[j] = max1 + arr1[j];
			temp2[j] = max2 + arr2[j];
		}
		temp1[n - 1] > temp2[n - 1] ? answer.push_back(temp1[n - 1]) : answer.push_back(temp2[n - 1]);
	}

	for (auto x : answer) cout << x << endl;

	return 0;
}