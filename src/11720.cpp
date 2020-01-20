#include <iostream>

using namespace std;

int main()
{
	int n, temp;
	int sum = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%1d", &temp);
		sum += temp;
	}
	cout << sum << endl;

	return 0;
}