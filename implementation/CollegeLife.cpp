#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll s;
    cin >> s;
    ll intro[s];
    for (int i = 0; i < s; i++)
      cin >> intro[i];

    ll eps[s];
    ll time[s];
    for (int i = 0; i < s; i++)
    {
      ll ep;
      cin >> ep;
      eps[i] = ep;
      ll sum = 0;
      for (int j = 0; j < ep; j++)
      {
        ll k;
        cin >> k;
        sum += k;
      }
      time[i] = sum;
    }
    long long ans = 0;
    for (int i = 0; i < s; i++)
    {

      if (eps[i] > 1)
      {
        time[i] -= (eps[i] - 1) * intro[i];
      }
      ans += time[i];
    }
    cout << ans << endl;
  }
  return 0;
}