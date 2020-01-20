#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> input;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		input.push_back(temp);
	}

	int max = -1;
	for (auto x : input) {
		x > max ? max = x : max = max;
	}
	if (max >= 0) {
		vector<int> arr(n, -1);
		input[0] >= 0 ? arr[0] = input[0] : arr[0] = -1;
		for (int i = 1; i < n; i++) {
			int temp;
			arr[i - 1] == -1 ? temp = input[i] : temp = input[i] + arr[i - 1];
			temp >= 0 ? arr[i] = temp : arr[i] = -1;
		}

		int answer = -1;
		for (auto x : arr) {
			x > answer ? answer = x : answer = answer;
		}

		cout << answer << endl;
	}
	else {
		int answer = input[0];
		for (auto x : input) {
			x > answer ? answer = x : answer = answer;
		}

		cout << answer << endl;
	}

	return 0;
}