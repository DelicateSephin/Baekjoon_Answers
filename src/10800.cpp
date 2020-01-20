#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	struct Ball {
		int color;
		int idx;
	};
	vector<vector<Ball>> ball(2001, vector<Ball>());
	for (int i = 0; i < n; i++) {
		int color, size;
		scanf("%d %d", &color, &size);
		ball[size].push_back(Ball{ color,i });
	}

	vector<int> answer(n);
	vector<int> sum(n + 1, 0);
	int cnt = 0;
	for (int i = 1; i <= 2000; i++) {
		for (auto&& x : ball[i]) {
			answer[x.idx] = cnt - sum[x.color];
		}
		for (auto&& x : ball[i]) {
			sum[x.color] += i;
			cnt += i;
		}
	}

	for (auto x : answer) printf("%d\n", x);

	return 0;
}