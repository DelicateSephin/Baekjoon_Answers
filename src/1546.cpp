#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float max = 0.0f, sum = 0.0f;
	for (int i = 0; i < n; i++) {
		float temp;
		cin >> temp;
		sum += temp;
		if (temp > max)
			max = temp;
	}
	sum /= n;
	sum /= max;
	sum *= 100;
	cout << sum;

	return 0;
}