#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n, k;
  cin >> n >> k;
  string s[n];
  int sum = k * (k + 1) / 2;
  for (int i = 0; i < n; i++)
    cin >> s[i];
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    string str = s[i];
    unordered_set<int> st;
    for (int j = 0; j < str.size(); j++)
    {
      int x = str[j] - '0';
      if (x <= k)
        st.insert(x);
    }
    if (st.size() == k + 1)
      ans++;
  }
  cout << ans << endl;

  return 0;
}