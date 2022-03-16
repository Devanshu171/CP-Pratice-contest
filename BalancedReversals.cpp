#include <bits/stdc++.h>
using namespace std;
void reverse(string &s, int i, int j)
{
  while (i < j)
  {
    swap(s[i], s[j]);
    i++;
    j--;
  }
  cout << s << endl;
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
    sort(s.begin(), s.end());
    cout << s << endl;
  }
  return 0;
}