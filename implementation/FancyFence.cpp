#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  unordered_set<int> st;
  st.insert(60);
  st.insert(90);
  st.insert(108);
  st.insert(120);
  st.insert(135);
  st.insert(140);
  st.insert(144);
  // st.insert(147);
  st.insert(150);
  st.insert(152);
  // st.insert(154);
  st.insert(156);
  st.insert(160);
  st.insert(162);
  st.insert(165);
  st.insert(168);
  st.insert(170);
  st.insert(171);
  st.insert(172);

  while (t--)
  {
    int a;
    cin >> a;
    if (st.count(a) > 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}