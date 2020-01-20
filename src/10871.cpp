#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, cmp;
	cin >> n >> cmp;
	vector<int> list;
	vector<int> answer;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		list.push_back(temp);
	}
	for (auto x : list) {
		if (x < cmp)
			answer.push_back(x);
	}
	for (auto x : answer)
		cout << x << endl;

	return 0;
}