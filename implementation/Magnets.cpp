#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string a;
  cin >> a;
  char last = a[1];
  int ans = 1;
  for (int i = 1; i < n; i++)
  {
    string k;
    cin >> k;
    if (k[0] == last)
      ans++;
    last = k[1];
  }
  cout << ans;
  return 0;
}