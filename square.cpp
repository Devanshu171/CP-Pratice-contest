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
    bool flag = false;
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
      mpp[s[i]]++;
      if (mpp[s[i]] > 1)
      {
        flag = true;
        cout << "Yes" << endl;
        break;
      }
    }
    if (!flag)
    {
      cout << "No" << endl;
    }
  }

  return 0;
}