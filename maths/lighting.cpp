#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;

    int res = n * (m / 2);
    if (m & 1)
    {
      res += (n + 1) / 2;
    }

    cout << res << endl;
  }
  return 0;
}