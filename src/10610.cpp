#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int sum = 0;
	bool check[2] = { false,false };
	for (int i = 0; i < str.size(); i++) {
		sum += str[i];
		if (str[i] == '0')
			check[0] = true;
	}
	if ((sum - '0') % 3 == 0)
		check[1] = true;

	if (check[0] == true and check[1] == true) {
		vector<int> arr;
		for (int i = 0; i < str.size(); i++) {
			int temp = str[i] - '0';
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end());
		reverse(arr.begin(), arr.end());

		for (auto x : arr) {
			cout << x;
		}
	}
	else
		cout << -1 << endl;

	return 0;
}