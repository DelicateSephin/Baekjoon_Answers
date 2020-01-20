#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int C;
	cin >> C;

	vector<float> answer;
	for (int i = 0; i < C; i++) {
		int n;
		cin >> n;
		vector<float> arr(n);
		float average = 0.0f;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			average += arr[j];
		}
		average /= arr.size();
		int cnt = 0;
		for (auto x : arr) {
			if (x > average) cnt++;
		}
		float percent = (float)cnt / arr.size() * 100;
		answer.push_back(percent);
	}

	for (auto x : answer)
		printf("%0.3f%%\n", x);

	return 0;
}