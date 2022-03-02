#include <iostream>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  while (k-- && n != 0)
  {
    int r = n % 10;
    if (r != 0)
    {
      n--;
    }
    else
    {
      n /= 10;
    }
  }
  cout << n;
  return 0;
}