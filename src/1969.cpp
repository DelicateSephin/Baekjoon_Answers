#include <iostream>
#include <vector>
#include <string>

#define endl '\n'

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	vector<string> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	string answer;
	int sum = 0;
	for (int i = 0; i < m; i++) {
		int cnt[4] = { 0,0,0,0 }; // A,C,G,T
		for (int j = 0; j < n; j++) {
			switch (arr[j].at(i)) {
			case 'A':
				cnt[0]++;
				break;
			case 'C':
				cnt[1]++;
				break;
			case 'G':
				cnt[2]++;
				break;
			case 'T':
				cnt[3]++;
				break;
			}
		}
		int max = 0;
		if (cnt[1] > cnt[max])
			max = 1;
		if (cnt[2] > cnt[max])
			max = 2;
		if (cnt[3] > cnt[max])
			max = 3;

		switch (max) {
		case 0:
			answer += 'A';
			sum += (n - cnt[max]);
			break;
		case 1:
			answer += 'C';
			sum += (n - cnt[max]);
			break;
		case 2:
			answer += 'G';
			sum += (n - cnt[max]);
			break;
		case 3:
			answer += 'T';
			sum += (n - cnt[max]);
			break;
		}
	}

	cout << answer << endl << sum << endl;

	return 0;
}