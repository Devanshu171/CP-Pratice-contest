#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> arr[i][j];
      }
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {

      for (int j = 0; j < m; j++)
      {
        long long sum = arr[i][j];
        int row = i, col = j;
        // cout << "cell-->" << arr[i][j] << endl;
        //.. top left
        row = i - 1, col = j - 1;
        for (; row >= 0 && col >= 0; row--, col--)
          sum += arr[row][col];

        // cout << "top left sum-->" << sum << endl;
        //.. top right
        row = i - 1, col = j + 1;
        for (; row >= 0 && col < m; row--, col++)
        {
          sum += arr[row][col];
        }
        // cout << "top right sum-->" << sum << endl;

        //.. bottom left
        row = i + 1, col = j - 1;
        for (; row < n && col >= 0; row++, col--)
          sum += arr[row][col];

        // cout << "bottom right sum-->" << sum << endl;

        //.. bottom right
        row = i + 1, col = j + 1;
        for (; row < n && col < m; row++, col++)
        {
          sum += arr[row][col];
        }

        // cout << "bottom left sum-->" << sum << endl;

        // cout << "sum-->" << sum << endl;
        ans = max(ans, sum);
      }
    }

    cout << ans << endl;
  }
  return 0;
}