#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());

	int cnt = 0;
	int max = 0;
	for (auto x : arr) {
		cnt++;
		if ((x*cnt) > max) {
			max = x * cnt;
		}
	}

	cout << max << endl;

	return 0;
}