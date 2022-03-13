#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
  {
    int mxi, mni;
    if (i == 0)
    {
      mni = abs(a[i] - a[i + 1]);
      mxi = abs(a[i] - a[n - 1]);
    }
    else if (i == n - 1)
    {
      mni = abs(a[i] - a[i - 1]);
      mxi = abs(a[i] - a[0]);
    }
    else
    {
      mni = min(abs(a[i] - a[i + 1]), abs(a[i] - a[i - 1]));
      mxi = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
    }
    cout << mni << " " << mxi << endl;
  }

  return 0;
}