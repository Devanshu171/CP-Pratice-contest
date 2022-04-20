#include <bits/stdc++.h>
using namespace std;
void dec(vector<int> &a, int f)
{
  for (int i = 0; i < a.size(); i++)
  {
    if (!f)
    {
      a[i] -= 1;
    }
    else
    {
      a[i] += 1;
    }
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < m; i++)
      cin >> b[i];
    while (true)
    {

      int n1 = a.size();
      int m1 = b.size();
      auto i = a.end(), j = m1 - 1;
      if (n1 == 0 && m1 != 0 && b.back() <= c)
      {
        cout << "YES" << endl;
        break;
      }
      if (n1 != 0 && m1 == 0 && a.back() <= c)
      {
        cout << "YES" << endl;
        break;
      }
      if (n1 == 0 && m1 == 0)
      {
        cout << "YES" << endl;
        break;
      }
      if (a.back() <= c && b.back() <= c)
      {
        cout << "YES" << endl;
        break;
      }
      bool flag = false;

      while (true)
      {
        if (a[i] > b[i] && a[i] <= c)
        {
          a.erase(i);
        }
      }
    }
  }
  return 0;
}