#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dsum(ll n)
{
  ll sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll s1 = dsum(n);
    ll s2 = dsum(n + 1);
    int f = s1 % 2 + s2 % 2;
    if (f == 1)
      cout << n + 1 << endl;
    else
      cout << n + 2 << endl;
  }

  return 0;
}