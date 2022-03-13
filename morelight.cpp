#include <bits/stdc++.h>
using namespace std;
/*
      8 1 9 1    n==4
  1-  1 1 1 1

  2-  0 1 1 1

  3- 0 1 0 1

  4- 1 1 0 1


*/

int main()
{
  while (true)
  {
    string s;
    cin >> s;
    if (s.size() == 1 && s[0] - '0' == 0)
      break;
    int n = s.size();
    bool ans = 0;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {

        int z = s[j] - '0';
        if (z % i && j == n - 1)
        {
          ans = !ans;
        }
      }
    }
    if (ans)
    {
      cout << "yes" << endl;
    }
    else
    {
      cout << "no" << endl;
    }
  }
  return 0;
}