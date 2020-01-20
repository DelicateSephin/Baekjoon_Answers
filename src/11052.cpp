#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n + 1, 0);
	for (int i = 1; i <= n; i++) cin >> arr[i];

	vector<int> answer(n + 1, 0);
	//answer[0] = 0;
	for (int i = 1; i <= n; i++) {
		int max = 0;
		for (int j = 0; j <= i; j++) {
			max > (answer[j] + arr[i - j]) ? max = max : max = (answer[j] + arr[i - j]);
		}
		answer[i] = max;
	}

	cout << answer[n] << endl;

	return 0;
}