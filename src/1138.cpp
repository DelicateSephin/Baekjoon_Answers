#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector<int> answer(n, -1);
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		int posi;
		for (int j = 0; j < n; j++) {
			if (cnt == arr[i]) {
				if (answer[j] == -1) {
					posi = j;
					break;
				}
				else
					continue;
			}
			if (answer[j] == -1) {
				cnt++;
				continue;
			}
		}
		answer[posi] = i + 1;
	}

	for (auto x : answer)
		cout << x << ' ';

	return 0;
}