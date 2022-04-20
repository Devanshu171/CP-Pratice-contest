#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {

    int n, m;
    cin >> n >> m;
    int mark[m + 1];
    for (int i = 1; i <= m; i++)
    {
      mark[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      mark[a] = 1;
    }
    bool flag = false;
    for (int i = 1; i <= m; i++)
    {

      if (mark[i] == 0)
      {
        flag = true;
        break;
      }
    }
    if (flag)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}