#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {

    int ans = -1;
    for (int i = 0; i < 3; i++)
    {
      int a;
      cin >> a;
      ans = max(ans, a);
    }
    cout << ans << endl;
  }
  return 0;
}