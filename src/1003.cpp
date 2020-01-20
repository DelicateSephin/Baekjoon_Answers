#include <iostream>
#include <vector>

using namespace std;

struct ValuePair {
	ValuePair() { this->zero = 0; this->one = 0; }
	ValuePair(const int zero, const int one) { this->zero = zero; this->one = one; }
	~ValuePair() {}
	bool operator==(const ValuePair& object) { if (this->zero == object.zero && this->one == object.one) return true; else return false; }
	ValuePair operator+(const ValuePair& object) { return ValuePair(this->zero + object.zero, this->one + object.one); }
	int zero;
	int one;
};

ValuePair getResult(const int n)
{
	static ValuePair resultTable[41];
	resultTable[0] = ValuePair(1, 0);
	resultTable[1] = ValuePair(0, 1);

	if (resultTable[n] == ValuePair()) {
		resultTable[n] = getResult(n - 1) + getResult(n - 2);		
	}
	return resultTable[n];
}

int main()
{
	int T;
	vector<ValuePair> answer;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		answer.push_back(getResult(N));
	}

	for (auto x : answer) {
		cout << x.zero << " " << x.one << endl;
	}

	return 0;
}