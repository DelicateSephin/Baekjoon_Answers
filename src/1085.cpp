#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	(w - x) < x ? x = w - x : false;
	(h - y) < y ? y = h - y : false;

	if (x > y)
		cout << y << endl;
	else
		cout << x << endl;
	
	return 0;
}