#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int i = 0, j = n - 1;
  int s = 0, d = 0;
  bool flag = 1;
  while (i <= j)
  {
    if (a[i] > a[j])
    {
      if (flag)
        s += a[i];
      else
        d += a[i];

      i++;
    }
    else
    {
      if (flag)
        s += a[j];
      else
        d += a[j];
      j--;
    }
    flag = !flag;
  }

  cout << s << " " << d;
  return 0;
}