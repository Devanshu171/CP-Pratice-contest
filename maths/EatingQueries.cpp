#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n, q;
    cin >> n >> q;

    int sugar[n];
    for (int i = 0; i < n; i++)
    {
      cin >> sugar[i];
    }
    sort(sugar, sugar + n, [&](int &a, int &b)
         { return a > b; });
    int preSugar[n];
    preSugar[0] = sugar[0];
    for (int i = 1; i < n; i++)
    {
      preSugar[i] = sugar[i] + preSugar[i - 1];
    }

    while (q--)
    {
      int x;
      cin >> x;
      int ans = -1;
      int s = 0, e = n - 1;
      while (s <= e)
      {
        int mid = s + (e - s) / 2;
        // cout << preSugar[mid] << endl;
        if (preSugar[mid] >= x)
        {
          ans = mid + 1;
          e = mid - 1;
        }
        else
        {
          s = mid + 1;
        }
      }
      cout << ans << endl;
    }
  }

  return 0;
}