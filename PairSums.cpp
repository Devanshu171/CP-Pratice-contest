#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bool flag = false;
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    int diff = k - arr[i];
    if (mpp[diff] > 0)
    {
      cout << "YES" << endl;
      flag = true;
      break;
    }
    mpp[arr[i]]++;
  }
  if (!flag)
  {
    cout << "NO" << endl;
  }

  return 0;
}