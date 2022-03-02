#include <iostream>
using namespace std;

int main()
{
  int k, n, w;
  cin >> k >> n >> w;

  int tc = 0;
  for (int i = 1; i <= w; i++)
  {
    tc += i * k;
  }
  if (tc > n)
    cout << tc - n;
  else
    cout << 0;
  return 0;
}