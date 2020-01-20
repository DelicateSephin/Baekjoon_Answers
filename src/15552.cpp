#include <iostream>

using namespace std;


int main()
{
	int T;
	int a, b;

	cin >> T;
	int* data = new int[T];

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		data[i] = a + b;
	}
	for (int i = 0; i < T; i++)
		printf("%d\n", data[i]);

	delete[] data;
	
	return 0;
}