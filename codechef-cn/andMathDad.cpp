#include <bits/stdc++.h>
using namespace std;
/*
    1 -1
    2 -2
    3 -1 2
    4 -1 2 1
    5 - 2 1 2
*/
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    string ans1 = "";
    string ans2 = "";
    bool flag1 = true;
    bool flag = false;
    // if (n & 1)
    //   flag = true;
    while (sum1 < n)
    {
      if (flag)
      {
        sum1 += 2;
        ans1.push_back(2 + '0');
      }
      else
      {
        sum1 += 1;
        ans1.push_back(1 + '0');
      }
      flag = !flag;
    }
    while (sum2 < n)
    {
      if (flag1)
      {
        sum2 += 2;
        ans2.push_back(2 + '0');
      }
      else
      {
        sum2 += 1;
        ans2.push_back(1 + '0');
      }
      flag1 = !flag1;
    }

    // cout << sum1 << " ";
    // cout << ans1 << endl;
    // cout << sum2 << " ";
    // cout << ans2 << endl;
    if (sum2 == n)
      cout
          << ans2 << endl;
    else if (sum1 == n)
      cout << ans1 << endl;
  }

  return 0;
}