#include <iostream>
#include <string>

using namespace std;

int main()
{
	char str[201];

	for (int i = 0; i < 100; i++) {
		cin.getline(str, 200);
		cout << str << endl;
	}

	return 0;
}