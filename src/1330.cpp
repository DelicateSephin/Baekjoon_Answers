#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a > b) cout << ">\n" << endl;
	else if (a == b) cout << "==\n" << endl;
	else cout << "<\n" << endl;

	return 0;
}