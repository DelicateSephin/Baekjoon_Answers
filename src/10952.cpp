#include <iostream>
#include <vector>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int a, b;
  vector<int> answer;

  while(cin >> a >> b){
    answer.push_back(a + b);
  }
  
  for(auto x : answer) cout << x << endl;

  return 0;
}