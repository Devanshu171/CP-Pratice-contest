#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int n = s.size();
    unordered_map<char, vector<int>>
        mpp;
    for (int i = 0; i < n; i++)
    {
      mpp[s[i]].push_back(i + 1);
    }

    int odd = 0;
    for (auto it : mpp)
    {
      if (it.second.size() & 1)
        odd++;
    }
    int ans[n];
    if (odd > 1)
      cout << -1 << endl;
    else
    {
      int i = 0, j = n - 1;
      for (auto it : mpp)
      {
        auto k = it.second;
        if (k.size() & 1)
        {
          ans[n / 2] = k[k.size() - 1];
          k.pop_back();
          for (int l = 0; l < k.size();)
          {
            // cout << k[l] << " ";
            ans[i] = k[l++];
            ans[n - i - 1] = k[l++];
            i++;
          }
        }
        else
        {
          for (int l = 0; l < k.size();)
          {
            ans[i] = k[l++];
            ans[n - i - 1] = k[l++];
            i++;
          }
        }
      }
      for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
      cout << endl;
    }
  }

  return 0;
}