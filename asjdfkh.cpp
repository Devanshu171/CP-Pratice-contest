#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  unordered_set<int> st;
  for (int i = 0; i < 2; i++)
  {
    int m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
      int a;
      cin >> a;
      st.insert(a);
    }
  }
  if (st.size() == n)
    cout << "I become the guy.";
  else
    cout << "Oh, my keyboard!";

  return 0;
}