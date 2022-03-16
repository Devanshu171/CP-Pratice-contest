#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n] = {0};
  int current = n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    a[x] = 1;
    int cur2 = current;
    if (x == current)
    {
      for (int i = cur2; i > 0; i--)
      {
        if (a[i])
        {
          cout << i << " ";
          a[i] = 0;
          current = i - 1;
        }
        else
        {
          break;
        }
      }
    }
    cout << endl;
  }

  return 0;
}