#include <iostream>
#include <vector>

using namespace std;

struct Pair {
	int day;
	int profit;
};

int main()
{
	int n;
	cin >> n;

	vector<Pair> arr(n+1);
	for (int i = 0; i < n; i++) {
		Pair temp;
		cin >> temp.day >> temp.profit;
		arr[i+1] = temp;
	}

	vector<int> answer(n + 2, 0);
	for (int i = 1; i <= n; i++) {
		if (i + arr[i].day > n + 1) {
			continue;
		}
		else {
			if ((answer[i] + arr[i].profit) > answer[i + arr[i].day]) {
				for (int j = i + arr[i].day; j <= n + 1; j++) {
					(answer[i] + arr[i].profit) > answer[j] ? answer[j] = (answer[i] + arr[i].profit) : false;
				}
			}
		}
	}

	int max = 0;
	for (auto x : answer) {
		x > max ? max = x : false;
	}
	
	cout << max << endl;

	return 0;
}