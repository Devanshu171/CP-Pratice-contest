#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s[n];
  unordered_map<string, int> mpp;
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
    mpp[s[i]]++;
  }
  string ans;
  int m = -1;
  for (int i = 0; i < n; i++)
  {
    if (mpp[s[i]] > m)
    {
      m = mpp[s[i]];
      ans = s[i];
    }
  }
  cout << ans << endl;

  return 0;
}