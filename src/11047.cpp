#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	vector<int> arr;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	int cnt = 0;
	for (int i = 1; i <= N;) {
		if (K / arr[N - i] == 0) {
			i++;
			continue;
		}
		K -= arr[N - i];
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}