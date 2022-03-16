#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n < 25)
  {
    cout << "NO";
    return 0;
  }
  char a[26] = {0};
  for (int i = 0; i < n; i++)
  {
    char x;
    cin >> x;
    x = tolower(x);
    a[x - 'a']++;
  }
  int flag = 1;
  for (int i = 0; i < 26; i++)
  {
    if (a[i] == 0)
    {
      flag = false;
      break;
    }
  }
  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}