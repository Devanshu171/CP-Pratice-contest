#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;
    // cout << abs(a - b) << endl;
    if (abs(a - b) == 1 || abs(a - b) == 2)
    {

      // cout << 0 << endl;
      int p = 0;
      if (abs(a - b) == 2)
        p++;
      else
      {
        if (min(a, b) - 1 >= 1)
          p++;
        if (max(a, b) + 1 <= n)
          p++;
      }
      cout << p << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }
  return 0;
}