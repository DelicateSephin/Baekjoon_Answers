#include <iostream>
#include <vector>

using namespace std;

struct RGB {
	RGB(const int red, const int green, const int blue)
		:R(red), G(green), B(blue) {}
	int R;
	int G;
	int B;
};

int main()
{
	int n;
	cin >> n;

	vector<RGB> list(n, RGB(0, 0, 0));
	vector<RGB> answer(n, RGB(0, 0, 0));

	for (int i = 0; i < n; i++) {
		cin >> list[i].R >> list[i].G >> list[i].B;
	}
	answer[0] = list[0];
	for (int i = 1; i < n; i++) {
		answer[i].R = list[i].R + (answer[i - 1].G < answer[i - 1].B ? answer[i - 1].G : answer[i - 1].B);
		answer[i].G = list[i].G + (answer[i - 1].R < answer[i - 1].B ? answer[i - 1].R : answer[i - 1].B);
		answer[i].B = list[i].B + (answer[i - 1].G < answer[i - 1].R ? answer[i - 1].G : answer[i - 1].R);
	}
	int min = answer[n-1].R;
	if (answer[n - 1].G < min)
		min = answer[n - 1].G;
	if (answer[n - 1].B < min)
		min = answer[n - 1].B;

	cout << min << endl;

	return 0;
}