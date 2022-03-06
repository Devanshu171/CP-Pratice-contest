#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int last1 = n - 2;
    int coins = 0;
    for (int j = n - 2; j >= 0; j++)
    {
      if (a[j] == 1)
      {
        if (j != last1 - 1)
          coins += last1 - j;
        last1 = j;
      }
    }
    cout << coins << endl;
  }
  return 0;
}