#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      if (1 & i)
        neg.push_back(abs(a));
      else
        pos.push_back(abs(a));
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());
    if (neg[neg.size() - 1] > pos[0])
      swap(neg[neg.size() - 1], pos[0]);
    LL sum = 0;
    for (int i = 0; i < neg.size(); i++)
      sum -= neg[i];
    for (int i = 0; i < pos.size(); i++)
      sum += pos[i];
    cout << sum << endl;
  }

  return 0;
}