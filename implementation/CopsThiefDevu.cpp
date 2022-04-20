#include <bits/stdc++.h>
using namespace std;
void cr(vector<int> &arr, int cop, int x, int y)
{

  int k = x * y;
  int i = cop - 1, j = cop + 1;
  while (i >= 0 && k > 0)
  {
    arr[i--] = 1;
    k--;
  }
  k = x * y;
  while (j <= 100 && k > 0)
  {
    arr[j++] = 1;
    k--;
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int m, x, y;
    cin >> m >> x >> y;
    vector<int> house(101, 0);
    for (int i = 0; i < m; i++)
    {
      int h;
      cin >> h;
      house[h] = 1;
      cr(house, h, x, y);
    }

    int ans = 0;
    for (int i = 1; i < 101; i++)
    {
      if (house[i] == 0)
        ans++;
    }
    cout << ans << endl;
  }

  return 0;
}