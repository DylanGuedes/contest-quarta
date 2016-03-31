#include <iostream>
#include <cstdio>
#include <bitset>
#include <cmath>

using namespace std;

int main()
{
  int n;
  short int hour, minute, sec;
  char comma;

  cin >> n;
  for (int i=0; i < n; ++i) {
    cin >> hour;
    cin >> comma;
    cin >> minute;
    cin >> comma;
    cin >> sec;

    cout << i+1 << " ";
    for (int j=5; j >= 0; --j) {
      int myaux = (int)(pow(2, j)) & (int)hour;
      if (myaux != 0) {
        cout << 1;
      } else {
        cout << 0;
      }

      myaux = (int)(pow(2, j)) & (int)minute;
      if (myaux != 0) {
        cout << 1;
      } else {
        cout << 0;
      }
      myaux = (int)(pow(2, j)) & (int)sec;
      if (myaux != 0) {
        cout << 1;
      } else {
        cout << 0;
      }
    }
    cout << " " << bitset<6>(hour) << bitset<6>(minute) << bitset<6>(sec) << endl;
  }
  return 0;
}
