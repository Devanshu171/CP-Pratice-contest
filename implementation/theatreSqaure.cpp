#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  double n, m, a;
  cin >> n >> m >> a;
  cout << (ll)ceil(m / a) * (ll)(ceil(n / a));

  return 0;
}