#include <iostream>
#include <vector>

using namespace std;

struct Pair {
	long long zero;
	long long one;
};

int main()
{
	long long n;
	cin >> n;
	
	vector<Pair> arr(n + 1, Pair{ -1,-1 });
	arr[0] = Pair{ 0,0 };
	arr[1] = Pair{ 0,1 };
	for (int i = 2; i <= n; i++) {
		arr[i].zero = arr[i - 1].zero + arr[i - 1].one;
		arr[i].one = arr[i - 1].zero;
	}

	cout << arr[n].zero + arr[n].one << endl;

	return 0;
}