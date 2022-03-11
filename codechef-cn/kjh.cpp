#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll w = n / 7;
    // cout << w << " ";
    n = n - w;
    cout << (ll)n / 6 << endl;
  }

  return 0;
}
