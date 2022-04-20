#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}
int main()
{
  int n, m;
  cin >> n >> m;

  for (int i = n + 1; i <= 55; i++)
  {
    if (prime(i))
    {
      if (i == m)
      {
        cout << "YES" << endl;
        break;
      }
      else
      {
        cout << "NO" << endl;
        break;
      }
    }
  }
  return 0;
}