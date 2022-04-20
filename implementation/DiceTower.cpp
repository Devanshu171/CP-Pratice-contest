#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int top;
  cin >> top;
  int x, y;
  cin >> x >> y;
  bool flag = true;
  int down = 7 - top;
  for (int i = 1; i < n; i++)
  {
    vector<int> dice(7, 0);
    // int down = 7 - top;
    int x1, y1;
    cin >> x1 >> y1;
    // cout << down << endl;
    if (x1 == down || y1 == down || 7 - x1 == down || 7 - y1 == down)
    {
      cout << "NO" << endl;
      flag = false;
      break;
    }
    dice[x1] = 1;
    dice[y1] = 1;
    dice[7 - x1] = 1;
    dice[7 - y1] = 1;
    dice[down] = 1;
    for (int j = 1; j <= 7; j++)
    {
      if (dice[j] == 0)
        down = j;
    }
  }
  if (flag)
    cout << "YES" << endl;

  return 0;
}