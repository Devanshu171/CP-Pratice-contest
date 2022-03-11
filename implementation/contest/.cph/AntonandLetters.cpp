#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  unordered_set<char> st;

  for (int i = 1; i < s.size() - 1; i++)
  {
    char x = s[i];
    // cout << x << " ";
    if (isalpha(x))
      st.insert(s[i]);
  }
  cout << st.size();
  return 0;
}