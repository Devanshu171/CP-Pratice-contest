#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    int clear = 0;
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
      int a;
      cin >> a;
      if (a == 1)
        clear++;
      else
      {
        if (i <= m)
        {
          flag = false;
        }
      }
    }
    // cout << flag << endl;
    if (clear == n)
      cout << 100 << endl;
    else if (flag == true)
      cout << k << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}