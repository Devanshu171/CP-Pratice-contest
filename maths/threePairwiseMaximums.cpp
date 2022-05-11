#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    vector<int> arr;
    for (int i = 0; i < 3; i++)
    {
      int a;
      cin >> a;
      arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    if (arr[2] != arr[1])
      cout << "NO" << endl;
    else
    {
      cout << "YES" << endl;
      cout << arr[0] << " " << arr[0] << " " << arr[2] << endl;
    }
  }

  return 0;
}