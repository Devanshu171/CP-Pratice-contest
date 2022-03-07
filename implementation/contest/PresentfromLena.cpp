#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    int k = 0;
    for (int j = 0; j <= n * 2; j++)
    {
      if (j >= n - i && j <= n + i)
      {
        cout << k;
        j < n ? k++ : k--;
      }
      else if (j < n)
        cout << " ";
    }

    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    int k = 0;
    for (int j = 1; j <= 2 * n + 1; j++)
    {
      if (j >= i + 1 && j <= n * 2 - i + 1)
      {
        cout << k;
        j <= n ? k++ : k--;
      }
      else
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}