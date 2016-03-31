#include <iostream>

using namespace std;

long long int mdc(long long int a, long long int b)
{
  if (b == 0)
    return a;
  else
    return mdc(b, a % b);
}

long long int mmc(long long int a1, long long int a2)
{
  long long int mymdc = mdc(a1, a2);
  long long int mult = a1*a2;

  return mult / mymdc;
}

int main()
{
  int n;
  long long int a1, a2;
  cin >> n;

  for (int i=0; i < n; ++i) {
    cin >> a1 >> a2;
    cout << i+1 << " " << mmc(a1, a2) << " " << mdc(a1, a2) << endl;
  }

  return 0;
}
