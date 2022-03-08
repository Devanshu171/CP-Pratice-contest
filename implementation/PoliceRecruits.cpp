#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int crime = 0;
  int police = 0;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (a == -1 && police > 0)
    {
      police--;
    }
    else if (a == -1 && police == 0)
      crime++;
    else
    {
      if (a <= 10)
        police += a;
      else
        police += 10;
    }
  }
  cout << crime;
  return 0;
}