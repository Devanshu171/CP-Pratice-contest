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
    int i = 0, j = n - 1;
    int k = n;
    vector<int> odd, even;
    while (k--)
    {
      long a;
      cin >> a;
      if (a & 1)
      {

        odd.push_back(a);
      }
      else
      {
        even.push_back(a);
      }
    }
    if (odd.size() <= 1 || (odd.size() == n && odd.size() % 2 != 0))
    {
      cout << -1 << endl;
    }
    else
    {
      if (odd.size() % 2 == 0)
      {
        cout << odd[0] << " ";
        odd.erase(odd.begin());
      }

      for (int i = 0; i < even.size(); i++)
      {
        cout << even[i] << " ";
      }
      for (int i = 0; i < odd.size(); i++)
      {
        cout << odd[i] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}