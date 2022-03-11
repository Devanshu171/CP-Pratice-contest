#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t, k, d;
  cin >> n >> t >> k >> d;
  int c = 0;
  int timer2 = d;
  int ans1, ans2;
  for (int i = 0;; i++)
  {
    if (i % t == 0)
      c += k;
    if (c >= n)
    {
      ans1 = i;
      break;
    }
  }
  c = 0;
  int sec = 0;
  for (int i = 0;; i++)
  {
    if (i % t == 0)
      c += k;
    if (i == d)
    {
      sec = i;
    }
  }
  if (timer1 <= timer2)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}