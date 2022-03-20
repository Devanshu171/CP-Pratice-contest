#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // char xx[n][n];
  char r, w;
  int flag = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      char x;
      cin >> x;
      if (i == 0 && j == 0)
      {
        r = x;
      }

      if (i == 0 && j == 1)
      {
        w = x;
      }
      if (w == r)
        flag = false;
      if ((i == j && x != r) || (i + j == n - 1 && x != r))
      {
        flag = false;
      }
      else if (i != j && i + j != n - 1 && x != w)
      {
        flag = false;
      }
      // cout << flag << endl;
    }
  }
  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}