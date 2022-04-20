#include <bits/stdc++.h>
using namespace std;
#define ll long long
void flip(string &s, int i, int j)
{
  for (; i <= j; i++)
  {
    if (s[i] == '0')
      s[i] = '1';
    else
    {
      s[i] = '0';
    }
  }
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int, int>> ans;
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
      while (i < j && s[i] != '1')
        i++;
      while (i < j && s[j] != '0')
        j--;
      if (i < j)
      {

        flip(s, i, j);
        ans.push_back({i + 1, j - i + 1});
      }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
      cout << ans[i].first << " " << ans[i].second << endl;
    }
  }
  return 0;
}