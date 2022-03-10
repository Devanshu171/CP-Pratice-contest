#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k, r;
  cin >> k >> r;

  int i = 1;
  int temp = k;
  while (true)
  {
    k = temp * i;
    int l = k % 10;
    // cout << k << " ";
    if (l == 0 || (l == r))
      break;
    i++;
  }
  cout << i;
  return 0;
}