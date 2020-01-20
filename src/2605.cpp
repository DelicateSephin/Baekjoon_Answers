#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> answer(n, 0);
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	for (int i = n; i > 0; i--) {
		int k = -1;
		int temp = n;
		while (k < arr[i-1]) {
			temp--;
			if (answer[temp] == 0)
				k++;
		}
		answer[temp] = i;
	}

	for (auto x : answer)
		cout << x << endl;

	return 0;
}