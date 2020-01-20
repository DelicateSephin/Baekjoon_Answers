#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int cnt[2] = { 0,0 };
	int previous = str[0];
	for (int i = 1; i < str.size(); i++) {
		if (str[i] != previous) {
			cnt[previous - '0']++;
			previous = str[i];
		}
	}
	cnt[previous-'0']++;
	int answer;
	cnt[0] > cnt[1] ? answer = cnt[1] : answer = cnt[0];

	cout << answer << endl;

	return 0;
}