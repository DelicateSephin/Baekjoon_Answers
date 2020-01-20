#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());

	vector<int> min(k + 1, -1);
	min[0] = 0;

	for (int i = 1; i <= k; i++) {
		for (auto x : arr) {
			if (min[i] == -1) {
				if (i >= x) {
					if (min[i - x] != -1)
						min[i] = min[i - x] + 1;
				}
			}
			else {
				if (i >= x) {
					if (min[i - x] != -1)
						(min[i - x] + 1) < min[i] ? min[i] = min[i - x] + 1 : false;
				}
			}
		}
	}

	cout << min[k] << endl;

	return 0;
}