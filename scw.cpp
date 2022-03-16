#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;
    string k = s;
    sort(k.begin(), k.end());
    if (s == k)
      cout << "YES" << endl;
    else
    {

      for (int i = 0; i < n; i++)
      {
        if (s[i] != k[i])
        {
          swap(s[i], s[n - i - 1]);
        }
      }
      if (s == k)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }

  return 0;
}