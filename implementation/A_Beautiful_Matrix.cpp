#include <iostream>
using namespace std;

int main()
{
  int x, y;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      int k;
      cin >> k;
      if (k == 1)
      {
        x = i, y = j;
      }
    }
  }

  cout << abs(3 - x) + abs(3 - y);
  return 0;
}