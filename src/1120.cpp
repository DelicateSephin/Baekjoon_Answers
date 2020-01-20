#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	int differ = 50;
	for (int i = 0; i <= str2.size() - str1.size(); i++) {
		int temp = 0;
		for (int j = 0; j < str1.size(); j++) {
			if (str1[j] != str2[i + j])
				temp++;
		}
		if (temp < differ) {
			differ = temp;
		}
	}

	cout << differ << endl;

	return 0;
}