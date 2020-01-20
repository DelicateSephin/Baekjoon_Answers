#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> testCase;
	int n;
	int max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		testCase.push_back(temp);
		temp > max ? max = temp : max = max;
	}
	vector<int> arr(max + 1, -1);
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= max; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	for (auto x : testCase) {
		cout << arr[x] << endl;
	}

	return 0;
}