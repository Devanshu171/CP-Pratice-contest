#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int i = 0;
  while (true)
  {
    i++;
    a *= 3;
    b *= 2;
    if (a > b)
    {
      cout << i;
      break;
    }
  }
  return 0;
}