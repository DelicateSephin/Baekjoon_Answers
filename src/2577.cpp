#include <iostream>

using namespace std;

int main()
{
	int num = 1;
	for (int i = 0; i < 3; i++) {
		int temp;
		cin >> temp;
		num *= temp;
	}

	int collection[10] = { 0, };
	while (num / 10 != 0) {
		collection[num%10]++;
		num /= 10;
	}
	collection[num]++;

	for (auto x : collection)
		cout << x << endl;

	return 0;
}