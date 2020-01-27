#include <iostream>
#include <vector>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int t;
  int a, b;
  vector<int> answer;
  cin >> t;
  
  for(int i = 0; i < t; i++){
    cin >> a >> b;
    answer.push_back(a + b);
  }

  for(int i = 0; i < t; i++){
    cout << "Case #" << i + 1 << ": " << answer[i] << endl;
  }

  return 0;
}