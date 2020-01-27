#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int getGcd(int a, int b)
{
  if(a < b) swap(a, b);
  return (a % b == 0) ? b : getGcd(b, a % b);
}

int main()
{
  ios_base::sync_with_stdio(false);
  
  int gcd, lcm;
  cin >> gcd >> lcm;
  int min = INT_MAX;

  int a, b;
  int ab = lcm / gcd;
  for(int i = 1; i <= ab; i++){
    if(ab % i != 0) continue;
    if(getGcd(i, ab / i) != 1) continue;
    int temp = i + (ab / i);
    if(temp < min){
      min = temp;
      a = i;
      b = ab / i;
    }
  }

  cout << a * gcd << " " << b * gcd << endl;

  return 0;
}