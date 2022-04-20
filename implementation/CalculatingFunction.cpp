#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll n;
  cin >> n;
  if (n & 1)
    cout << -1 * (n + 1) / 2;
  else
    cout << n / 2;
  return 0;
}