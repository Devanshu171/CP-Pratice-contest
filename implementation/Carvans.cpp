#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int speed[n];
    for (int i = 0; i < n; i++)
      cin >> speed[i];
    int ans = 1;
    // int newspeed[n];
    // newspeed[0] = speed[0];
    for (int i = 1; i < n; i++)
    {

      if (speed[i] > speed[i - 1])
      {
        speed[i] = speed[i - 1];
      }
      else
      {
        ans++;
      }
    }

    cout << ans << endl;
  }
  return 0;
}