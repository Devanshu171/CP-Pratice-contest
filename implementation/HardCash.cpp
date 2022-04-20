#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    ll k;

    cin >> n >> k;
    ll arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      sum += a;
    }
    cout << (ll)sum % k << endl;
  }
  return 0;
}