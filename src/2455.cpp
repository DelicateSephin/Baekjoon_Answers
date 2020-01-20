#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> people(5, 0);

	for (int i = 0; i < 4; i++) {
		int in, out;
		cin >> out >> in;
		people[i + 1] = (people[i] - out);
		people[i + 1] += in;
	}

	int max = 0;
	for (auto x : people) {
		if (x > max)
			max = x;
	}

	cout << max << endl;

	return 0;
}