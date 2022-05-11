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
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      if (i % 2 == 0 && a % 2 != 0)
        odd++;
      else if (i % 2 != 0 && a % 2 == 0)
        even++;
    }
    if (even != odd)
      cout << -1 << endl;
    else
      cout << odd << endl;
  }
  return 0;
}