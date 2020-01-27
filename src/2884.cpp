#include <iostream>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int hour, minute;
  cin >> hour >> minute;

  minute -= 45;
  if(minute < 0){
    hour -= 1;
    minute += 60;
  }
  if(hour < 0){
    hour += 24;
  }

  cout << hour << " " << minute << endl;

  return 0;
}