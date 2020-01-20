#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> dwarf;
	int sum = 0;
	int answer[2];

    for(int i =  0; i < 9 ; i++){
        int temp;
        cin >> temp;
        dwarf.push_back(temp);
		sum += temp;
    }
    sort(dwarf.begin(), dwarf.end());
	sum -= 100;

	for (int i = 0; i < 8; i++) {
		for (int j = i+1; j < 9; j++) {
			if (dwarf[i] + dwarf[j] == sum) {
				dwarf[i] = 0;
				dwarf[j] = 0;
				for (auto x : dwarf) {
					if (x != 0)
						cout << x << endl;
				}
				return 0;
			}
		}
	}

    return 0;
}