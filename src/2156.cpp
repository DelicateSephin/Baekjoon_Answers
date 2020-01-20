#include <iostream>
#include <vector>

using namespace std;

struct Max {
	int greatest(void) { if (zero > one) { if (zero > two) return zero; else return two; } else { if (one > two)return one; else return two; } }
	int zero;
	int one;
	int two;
};

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	vector<Max> max(n);

	max[0] = Max{ 0,arr[0],0 };
	for (int i = 1; i < n; i++) {
		Max temp;
		temp.zero = max[i - 1].greatest();
		temp.one = max[i - 1].zero + arr[i];
		temp.two = max[i - 1].one + arr[i];
		max[i] = temp;
	}

	cout << max[n - 1].greatest() << endl;

	return 0;
}