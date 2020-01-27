#include <iostream>
#include <vector>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  vector<int> answer(t);
  for(int i = 0; i < t; i++){
    int n;
    cin >> n;
    vector<int> applicant(n);
    for(int j = 0; j < n; j++){
      int a, b;
      cin >> a >> b;
      applicant[a - 1] = b;
    }
    int cnt = 1;
    int limit = applicant[0];
    for(int j = 1; limit > 1; j++){
      if(applicant[j] < limit){
        limit = applicant[j];
        cnt++;
      }
    }
    answer[i] = cnt;
  }

  for(auto x : answer) cout << x << endl;

  return 0;
}