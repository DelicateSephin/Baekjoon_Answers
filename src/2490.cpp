#include <iostream>

using namespace std;

int main()
{
	int arr[3];
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			int temp;
			cin >> temp;
			sum += temp;
		}
		arr[i] = sum;
	}

	for (auto x : arr) {
		switch (x) {
		case 3:
			cout << 'A' << endl;
			break;
		case 2:
			cout << 'B' << endl;
			break;
		case 1:
			cout << 'C' << endl;
			break;
		case 0:
			cout << 'D' << endl;
			break;
		case 4:
			cout << 'E' << endl;
			break;
		}
	}

	return 0;
}