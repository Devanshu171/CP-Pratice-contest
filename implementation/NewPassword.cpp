#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  // int ch[26];
  // int uni = 0;
  int xx = 97;
  while (n > 0)
  {
    char x = xx;
    xx++;
    if (xx - 97 == k)
      xx = 97;
    cout << x;
    n--;
  }

  return 0;
}