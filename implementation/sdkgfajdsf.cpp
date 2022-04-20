#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int d;
    cin >> d;
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < d; i++)
    {
      if (s[i] == '0' || s[i] == '5')
      {
        flag = true;
        break;
      }
    }
    if (flag)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}