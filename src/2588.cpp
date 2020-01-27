#include <iostream>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int first, second;
  cin >> first >> second;

  int parse[3];
  parse[0] = second % 10;
  parse[1] = ((second - parse[0]) / 10) % 10;
  parse[2] = second / 100;

  int answer[4];
  answer[0] = first * parse[0];
  answer[1] = first * parse[1];
  answer[2] = first * parse[2];
  answer[3] = answer[0] + (10 * answer[1]) + (100 * answer[2]);

  for(auto x : answer) cout << x << endl;


  return 0;
}