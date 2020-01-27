#include <iostream>
#include <vector>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int k, c;
  cin >> k >> c;
  vector<int> answer(c);
  for(int i = 0; i < c; i++){
    int a, b;
    cin >> a >> b;
    int max;
    if(a == b){
    answer[i] = 1;
    }
    else if(a > b){
      a -= b;
      max = k - b;
      if(a <= max - a + 2) answer[i] = 1;
      else answer[i] = 0;
    }
    else{
      b -= a;
      max = k - a;
      if(b <= max - b + 1) answer[i] = 1;
      else answer[i] = 0;
    }
  }

  for(auto x : answer) cout << x << "\n";

  return 0;
}