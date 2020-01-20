#include <iostream>

using namespace std;

int func(int n, int m)
{
	return (n - 1) + n * (m - 1);
}

int main()
{
	int n, m;
	cin >> n >> m;

	cout << func(n, m) << endl;

	return 0;
}