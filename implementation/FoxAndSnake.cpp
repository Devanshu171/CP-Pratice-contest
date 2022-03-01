#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < m; j++)
      {
        cout << "#";
      }
    }
    else
    {
      if (!flag)
      {
        for (int j = 0; j < m; j++)
        {
          if (j == m - 1)
            cout << "#";
          else
            cout << ".";
        }
      }
      else
      {
        for (int j = 0; j < m; j++)
        {
          if (j == 0)
            cout << "#";
          else
            cout << ".";
        }
      }
      flag = !flag;
    }
    cout << endl;
  }
  return 0;
}