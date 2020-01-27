#include <iostream>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int year;
  cin >> year;

  if(year % 4 == 0){
    if(year % 100 == 0){
      if(year % 400 == 0){
        cout << 1 << endl;
        return 0;
      }
      cout << 0 << endl;
      return 0;
    }
    cout << 1 << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;

  return 0;
}