#include <iostream>
#include <vector>

using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);

  int a, b;
  int t;
  cin >> t;
  vector<int> answer(t);
  for(int i = 0; i < t; i++){
    cin >> a >> b;
    a %= 10;
    switch(a){
      case 0:
        answer[i] = 10;
        continue;
      case 1:
        answer[i] = 1;
        continue;
      case 2:
        b %= 4;
        switch(b){
          case 0:
            answer[i] = 6;
            continue;
          case 1:
            answer[i] = 2;
            continue;
          case 2:
            answer[i] = 4;
            continue;
          case 3:
            answer[i] = 8;
            continue;
        }
      case 3:
        b %= 4;
        switch(b){
          case 0:
            answer[i] = 1;
            continue;
          case 1:
            answer[i] = 3;
            continue;
          case 2:
            answer[i] = 9;
            continue;
          case 3:
            answer[i] = 7;
            continue;
        }
      case 4:
        b %= 2;
        switch(b){
          case 0:
            answer[i] = 6;
            continue;
          case 1:
            answer[i] = 4;
            continue;
        }
      case 5:
        answer[i] = 5;
        continue;
      case 6:
        answer[i] = 6;
        continue;
      case 7:
        b %= 4;
        switch(b){
          case 0:
            answer[i] = 1;
            continue;
          case 1:
            answer[i] = 7;
            continue;
          case 2:
            answer[i] = 9;
            continue;
          case 3:
            answer[i] = 3;
            continue;
        }
      case 8:
        b %= 4;
        switch(b){
          case 0:
            answer[i] = 6;
            continue;
          case 1:
            answer[i] = 8;
            continue;
          case 2:
            answer[i] = 4;
            continue;
          case 3:
            answer[i] = 2;
            continue;
        }
      case 9:
        b %= 2;
        switch(b){
          case 0:
            answer[i] = 1;
            continue;
          case 1:
            answer[i] = 9;
            continue;
        }
    }
  }

  for(auto x : answer) cout << x << endl;

  return 0;
}