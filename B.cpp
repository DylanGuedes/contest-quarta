#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<char, char> mymap;
  int n;

  string mys;
  string myhex;

  cin >> n;
  for (int i=0; i < n; ++i) {
    mymap.clear();
    getline(cin, mys);
    getline(cin, mys);

    cin >> myhex;
    int aSize = myhex.size();
    for (int i=0; i < aSize; ++i) {
      mymap.insert(pair<char, char>(i+65, myhex[i]));
    }
    aSize = mys.size();
    for (int i=0; i < aSize; ++i) {
      if (mys[i] == ' ') {

      } else {
        mys[i] = mymap[ mys[i] ];
      }
    }

    cout << i+1 << " " << mys << endl;
  }
  return 0;
}
