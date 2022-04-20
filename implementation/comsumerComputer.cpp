#include <bits/stdc++.h>
using namespace std;
int countUnattented(int n, string s)
{
  int counter[26] = {0};
  int occupied = 0;
  int res = 0;
  for (int i = 0; i < s.size(); i++)
  {
    int x = s[i] - 'A';
    if (counter[x] == 0)
    {
      counter[x] = 1;
      if (occupied < n)
      {
        counter[x] = 2;
        occupied++;
      }
      else
      {
        res++;
      }
    }
    else
    {
      if (counter[x] == 2)
      {
        occupied--;
        counter[x] = 0;
      }
    }
  }
  return res;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;
    cout << countUnattented(n, s) << endl;
  }
  return 0;
}