#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;	
	cin >> n >> k;

	vector<int> coin(n);
	for (int i = 0; i < n; i++){
		cin >> coin[i];
	}
	sort(coin.begin(), coin.end());

	vector<int> answer(k + 1, 0);
	answer[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			answer[j] += answer[j - coin[i]];
		}
	}

	cout << answer[k] << endl;

	return 0;
}

