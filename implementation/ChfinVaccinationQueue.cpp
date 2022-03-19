#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, p, x, y;
    cin >> n >> p >> x >> y;
    int ans = 0;
    while (n--)
    {
      int a;
      cin >> a;
      if (p > 0)
      {
        if (a == 0)
          ans += x;
        else
          ans += y;
        p--;
      }
    }
    cout << ans << endl;
  }

  return 0;
}