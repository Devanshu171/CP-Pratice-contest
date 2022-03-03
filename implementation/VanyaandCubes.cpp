#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int level = 0;
  while (true)
  {
    level++;
    int cubes = level * (level + 1) / 2;
    if (cubes <= n)
    {
      n -= cubes;
    }
    else
    {
      break;
    }
  }
  cout << level - 1;
  return 0;
}