#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mpp[arr[i]]++;
    }

    int pair = 0;
    int single = 0;
    for (auto it : mpp)
    {
      int k = it.second;
      single += k % 2;
      pair += k / 2;
    }
    int pl = pair % 2;
    int ans = 0;
    if (pl == 1)
    {
      if (single > 0)
      {
        ans += 1;
        single--;
      }
      else
      {
        ans += 2;
      }
    }
    if (single > 0)
    {
      ans += single;
      if (single % 2 == 1)
        ans += 2;
    }
    cout << ans << endl;
  }

  return 0;
}