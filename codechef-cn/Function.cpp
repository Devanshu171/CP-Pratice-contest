#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int p = 0;
    int x = 0;
    int ans = 0;
    while (x <= n)
    {

      x = pow(2, p);
      if (x > n)
        break;
      p++;
      ans++;
    }
    cout << (n - ans + 1) << endl;
  }

  return 0;
}