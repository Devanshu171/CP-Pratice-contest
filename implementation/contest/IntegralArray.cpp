#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, c;
    cin >> n >> c;
    int a[n];
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      st.insert(a[i]);
    }
    bool flag = true;
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
      for (int j = i; j >= 0; j--)
      {

        if (st.find(a[i] / a[j]) == st.end())
        {
          flag = false;
          cout << "No" << endl;
          break;
        }
        if (!flag)
          break;
      }
    }
    if (flag)
      cout << "Yes" << endl;
  }
  return 0;
}