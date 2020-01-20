#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int max = 0;
	vector<int> num(N);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
		if (num[i] > max) max = num[i];
	}

	vector<int> prime;
	prime.push_back(2);

	for (int i = 3; i <= max; i++) {
		bool isPrime = true;
		for (auto x : prime)
			if (i % x == 0) {
				isPrime = false;
				break;
			}
		if (isPrime) prime.push_back(i);
	}

	int cnt = 0;
	for (auto x : num) {
		if (x != 1) {
			bool isPrime = true;
			for (auto y : prime) {
				if (y >= x) break;
				if (x%y == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}