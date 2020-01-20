#include <iostream>
#include <vector>

using namespace std;

struct Stair {
	int P;
	int N;
	int S;
	int k;
};

int main()
{
	int n;
	cin >> n;
	vector<Stair> list(n);
	for (int i = 0; i < n; i++) {
		cin >> list[i].k;
	}

	list[0].P = list[0].k;
	list[0].N = list[0].k;
	list[0].S = list[0].k;
	list[1].P = list[0].N + list[1].k;
	list[1].N = list[1].k;
	list[1].S = list[1].P;
	for (int i = 2; i < n; i++) {
		list[i].P = list[i - 1].N + list[i].k;
		list[i].N = list[i - 2].S + list[i].k;
		list[i].S = list[i].P > list[i].N ? list[i].P : list[i].N;
	}

	cout << list[n - 1].S << endl;

	return 0;
}