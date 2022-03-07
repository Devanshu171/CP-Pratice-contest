#include <iostream>
using namespace std;

int main()
{
  int n, m, x;
  cin >> n >> m;
  if (n < m)
    x = -1;
  else
  {
    if (n % 2 == 0)
      x = n / 2;
    else
      x = n / 2 + 1;

    while (x % m != 0)
      x++;
  }
  cout << x << endl;
  return 0;
}