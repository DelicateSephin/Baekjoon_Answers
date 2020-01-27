#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);
  
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n + 1, vector<int>(m + 1));
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cin >> arr[i][j];
    }
  }
  int k;
  cin >> k;
  vector<int> answer(k, 0);
  for(int t = 0; t < k; t++){
    int i, j, x, y;
    cin >> i >> j >> x >> y;
    for(int X = i; X <= x; X++){
      for(int Y = j; Y <= y; Y++){
        answer[t] += arr[X][Y];
      }
    }
  }

  for(auto x : answer) cout << x << endl;

  return 0;
}