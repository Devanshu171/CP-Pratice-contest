#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int a[7];
  for (int i = 0; i < 7; i++)
    cin >> a[i];
  bool flag = false;
  while (true)
  {
    for (int i = 0; i < 7; i++)
    {

      n -= a[i];

      if (n <= 0)
      {
        flag = true;
        cout << i + 1 << endl;
        break;
      }
    }
    if (flag)
      break;
  }
  return 0;
}