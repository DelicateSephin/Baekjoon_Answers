#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	cin >> str;

	if (str.length() % 10 == 0) {
		for (int i = 0; i < str.length() / 10; i++) {
			for (int j = 0; j < 10; j++)
				cout << str[i * 10 + j];
			puts("");
		}
	}
	else {
		for (int i = 0; i < str.length() / 10; i++) {
			for (int j = 0; j < 10; j++)
				cout << str[i * 10 + j];
			puts("");
		}
		for (int i = 0; i < str.length() % 10; i++) {
			cout << str[str.length() - str.length() % 10 + i];
		}
		puts("");
	}

	return 0;
}