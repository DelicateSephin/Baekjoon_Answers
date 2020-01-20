#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	vector<int> arr;
	int now = 1;
	while (true) {
		int temp = now * now;
		if (temp > n) {
			break;
		}
		else {
			arr.push_back(temp);
			now++;
		}
	}

	int answer = -1;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] >= m) {
			answer = i;
			break;
		}
	}

	if (answer == -1) cout << -1 << endl;
	else {
		int sum = 0;
		for (int i = answer; i < arr.size(); i++) {
			sum += arr[i];
		}

		cout << sum << endl;
		cout << arr[answer] << endl;
	}

	return 0;
}