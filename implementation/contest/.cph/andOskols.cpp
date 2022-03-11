#include <bits/stdc++.h>
using namespace std;
/*


*/
int main()
{
  int n, m;
  cin >> n;
  int arr[n + 1];

  for (int i = 1; i <= n; i++)
    cin >> arr[i];

  cin >> m;
  int shot[m][2];
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    shot[i][0] = a;
    shot[i][1] = b;
  }

  for (int i = 0; i < m; i++)
  {
    int wire = shot[i][0];
    int bird = shot[i][1];

    int right = arr[wire] - bird;
    int left = bird - 1;
    if (wire - 1 >= 0)
    {

      arr[wire - 1] += left;
    }
    if (wire + 1 <= n)
    {
      arr[wire + 1] += right;
    }
    arr[wire] = 0;
  }

  for (int i = 1; i <= n; i++)
    cout << arr[i] << endl;
  return 0;
}