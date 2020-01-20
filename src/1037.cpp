#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());

	vector<int> prime;
	prime.push_back(2);

	int now = 0;
	int answer;
	while (true) {
		if (arr[0] % prime[now] == 0) {
			answer = arr[arr.size() - 1] * prime[now];
			break;
		}
		else {
			int temp = prime[now] + 1;
			while (true) {
				bool isPrime = true;
				for(auto x : prime)
					if (temp%x == 0) {
						isPrime = false;
						break;
					}
				if (isPrime) {
					prime.push_back(temp);
					break;
				}
				temp++;
			}
		}
		now++;
	}

	cout << answer << endl;

	return 0;
}