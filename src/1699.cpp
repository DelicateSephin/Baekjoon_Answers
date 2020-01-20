#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr;
	vector<int> answer(n + 1, -1);

	int i = 1;
	while (n >= (i*i)) {
		arr.push_back(i*i);
		i++;
	}

	answer[0] = 0;
	for (int k = 1; k <= n; k++) {
		for (auto x : arr) {
			if (x > k) break;
			else {
				if (answer[k - x] != -1) {
					if (answer[k] == -1) {
						answer[k] = answer[k - x] + 1;
					}
					else {
						if (answer[k] > (answer[k - x] + 1)) {
							answer[k] = answer[k - x] + 1;
						}
					}
				}
			}
		}
	}

	cout << answer[n] << endl;

	return 0;
}