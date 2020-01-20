#include <iostream>
#include <vector>
#include <algorithm>

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
	sort(input.begin(), input.end());

	vector<int> arr(n);
	arr[0] = input[0];
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i - 1] + input[i];
	}

	int sum = 0;
	for (auto x : arr) {
		sum += x;
	}

	cout << sum << endl;

	return 0;
}