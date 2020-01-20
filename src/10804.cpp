#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int list[21];
	for (int i = 0; i < 21; i++)
		list[i] = i;

	for (int i = 0; i < 10; i++) {
		int a, b;
		cin >> a >> b;

		vector<int> temp;
		for (int j = a; j <= b; j++) {
			temp.push_back(list[j]);
		}
		reverse(temp.begin(), temp.end());
		for (int j = a; j <= b; j++) {
			list[j] = temp[j - a];
		}
	}

	for (int i = 1; i <= 20; i++)
		cout << list[i] << ' ';

	return 0;
}