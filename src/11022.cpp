#include <iostream>
#include <vector>

using namespace std;

struct Group{
  int a;
  int b;
  int sum;
};


int main()
{
  ios_base::sync_with_stdio(false);

  int t;
  int a, b;
  vector<Group> answer;
  cin >> t;

  for(int i = 0; i < t; i++){
    cin >> a >> b;
    answer.push_back(Group{ a,b,a + b });
  }

  for(int i = 0; i < t; i++){
    cout << "Case #" << i + 1 << ": " << answer[i].a << " + " << answer[i].b << " = " << answer[i].sum << endl;
  }

  return 0;
}