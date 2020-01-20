#include <iostream>
#include <vector>

using namespace std;

void ripe(vector<int>& tomato, vector<int>& ripedList, int& riped, const int posi);

int main()
{
	int M, N;
	cin >> M >> N;

	vector<int> tomato(N*M);
	vector<int> ripedList;
	int riped = 0;
	int tomatoes = M * N;
	int nowDay = 0;

	for (int i = 0; i < M * N; i++) {
		cin >> tomato[i];
		if (tomato[i] == 1) {
			ripedList.push_back(i);
			riped++;
		}
		else if (tomato[i] == -1) {
			tomatoes--;
		}
	}

	while (riped < tomatoes) {
		int prevRiped = riped;
		vector<int> temp;

		for (auto x : ripedList) {
			ripe(tomato, temp, riped, x - M);
			ripe(tomato, temp, riped, x + M);
			if (x % M != 0)
				ripe(tomato, temp, riped, x - 1);
			if ((x + 1) % M != 0)
				ripe(tomato, temp, riped, x + 1);
		}

		if (prevRiped == riped) {
			nowDay = -1;
			break; 
		}
		else {
			nowDay++;
			ripedList.swap(temp);
		}
	}

	cout << nowDay << endl;

	return 0;
}

void ripe(vector<int>& tomato, vector<int>& ripedList, int& riped, const int posi)
{
	if (posi < 0 || posi >= tomato.size())
		return;
	if (tomato[posi] == 0) {
		tomato[posi] = 1;
		ripedList.push_back(posi);
		riped++;
		return;
	}
}