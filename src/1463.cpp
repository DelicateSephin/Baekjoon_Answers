#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> answer(n, 0);


	for (int i = 1; i < n; i++) {
		int temp = i + 1;
		if (temp % 6 == 0) {
			int min = answer[i - 1];
			if (answer[(temp / 3) - 1] < min)
				min = answer[(temp / 3) - 1];
			if (answer[(temp / 2) - 1] < min)
				min = answer[(temp / 2) - 1];

			answer[i] = min + 1;
		}
		else if (temp % 3 == 0)
			answer[i] = (answer[(temp / 3) - 1] < answer[i - 1] ? answer[(temp / 3) - 1] : answer[i - 1]) + 1;
		else if (temp % 2 == 0)
			answer[i] = (answer[(temp / 2) - 1] < answer[i - 1] ? answer[(temp / 2) - 1] : answer[i - 1]) + 1;
		else
			answer[i] = answer[i - 1] + 1;
	}

	cout << answer[n - 1] << endl;

	return 0;
}