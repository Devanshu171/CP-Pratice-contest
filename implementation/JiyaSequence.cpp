#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    ll p = 1;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      p *= a;
    }
    int val = p % 10;
    if (val == 2 || val == 3 || val == 5)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}