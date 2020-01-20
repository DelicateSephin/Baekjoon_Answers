#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin >> T;

	vector<int> list(T);

	int max = 0;
	for (int i = 0; i < T; i++) {
		cin >> list[i];
		list[i] > max ? max = list[i] : false;
	}

	vector<long long> P(max+1);
	P[0] = 0;
	P[1] = 1;
	P[2] = 1;
	P[3] = 1;
	P[4] = 2;
	P[5] = 2;

	for (int i = 6; i <= max; i++) {
		P[i] = P[i - 1] + P[i - 5];
	}

	for (auto x : list) {
		cout << P[x] << endl;
	}

	return 0;
}