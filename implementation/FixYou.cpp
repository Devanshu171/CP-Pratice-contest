#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;

    char mx[n][m];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> mx[i][j];
        if (i == n - 1 && mx[i][j] == 'D')
          ans++;
        if (j == m - 1 && mx[i][j] == 'R')
          ans++;
      }
    }

    cout << ans << endl;
  }
  return 0;
}