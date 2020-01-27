#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<int> card(n);
  for(int i = 0; i < n; i++){
    cin >> card[i];
  }
  sort(card.begin(), card.end());
  
  int last = n - 1;
  for(int i = card.size() - 1; i > 0; i--){
    if(card[i] < 0){
      last = i;
      break;
    }
  }

  int max = 0;
  for(int i = 0; i < last - 1; i++){
    for(int j = i + 1; j < last; j++){
      for(int k = j + 1; k < last + 1; k++){
        int temp = card[i] + card[j] + card[k];
        if(temp > max){
          if(temp <= m) max = temp;
          else break;
        }
      }
    }
  }
  
  cout << max << endl;

  return 0;
}