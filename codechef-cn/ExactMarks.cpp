
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
  ll n, x;
  cin >> n >> x;
  if (x == 3 * n - 1 || x == 3 * n - 2 || x == 3 * n - 5)
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
    if (x % 3 == 0)
    {
      cout << x / 3 << " 0 " << n - x / 3 << "\n";
    }
    else if (x % 3 == 1)
    {
      cout << (x + 2) / 3 << " 2 ";
      cout << n - (((x + 2) / 3) + 2) << "\n";
    }
    else
    {
      cout << (x + 1) / 3 << " 1 ";
      cout << n - (((x + 1) / 3) + 1) << "\n";
    }
  }
}

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}