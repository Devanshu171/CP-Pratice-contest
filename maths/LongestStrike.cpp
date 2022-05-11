#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> mpp;
    int arr[n];
    vector<int> cnt;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mpp[arr[i]]++;
      if (mpp[arr[i]] == k)
      {
        cnt.push_back(arr[i]);
      }
    }
    if (cnt.size() == 0)
      cout << -1 << endl;
    else
    {
      sort(arr, arr + n);
      int l = -1, r = -1;
      for (int k = 0; k < cnt.size(); k++)
      {
        int x = cnt[k];

        if (x >= arr[0] && x <= arr[n - 1])
        {
          l = arr[0];
          r = arr[n - 1];
          break;
        }
      }
      if (l == -1)
        cout << -1 << endl;
      else
        cout << l << " " << r << endl;
    }
  }

  return 0;
}