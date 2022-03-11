#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll n, x;
  cin >> n >> x;
  ll left = 0;
  ll ice = x;
  for (int i = 0; i < n; i++)
  {
    char x;
    ll a;
    cin >> x >> a;
    if (x == '+')
      ice += a;
    else if (x == '-')
    {
      if (ice >= a)
      {
        ice -= a;
      }
      else
      {
        left++;
      }
    }
  }
  cout << ice << " " << left;
  return 0;
}