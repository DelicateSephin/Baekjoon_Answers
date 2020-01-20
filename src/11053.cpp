#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n;
	cin >> n;
	
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	vector<int> answer(n, -1);
	answer[0] = arr[0];
	int answerSize = 1;
	for (int i = 1; i < n; i++) {
		int max = -1;
		for (int j = answerSize - 1; j >= 0; j--) {
			if (answer[j] < arr[i]) {
				max = j;
				break;
			}
		}
		if (answer[max + 1] == -1) {
			answer[max + 1] = arr[i];
			answerSize++;
		}
		else if (answer[max + 1] > arr[i]) {
			answer[max + 1] = arr[i];
		}
	}

	cout << answerSize << endl;

	return 0;
}