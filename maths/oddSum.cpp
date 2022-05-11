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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      count += (a & 1);
    }
    if ((count == n && !(n & 1)) || count == 0)
      cout << "NO" << endl;
    else
    {
      cout << "YES" << endl;
    }
  }

  return 0;
}