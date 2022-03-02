#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  unordered_set<char> st;
  for (int i = 0; i < n; i++)
  {
    st.insert(s[i]);
  }
  if (st.size() % 2 != 0)
  {
    cout << "IGNORE HIM!";
  }
  else
  {
    cout << "CHAT WITH HER!";
  }
  return 0;
}