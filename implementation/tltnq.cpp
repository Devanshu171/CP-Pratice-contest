#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int arr[c];
  int cth_num;
  for (int i = 2; c > 0; i++)
  {
    if (i % a == 0 || i % b == 0)
    {
      c--;
      cth_num = i;
    }
  }
  int lcm;
  for (int i = 1; i <= a * b; i++)
  {
    if (i % a == 0 && i % b == 0)
    {
      lcm = i;
      break;
    }
  }
  int step;

  return 0;
}