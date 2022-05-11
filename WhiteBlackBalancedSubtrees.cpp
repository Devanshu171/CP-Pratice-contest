#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, int par, int &ans, vector<int> &black, vector<int> &white)
{

  for (auto it : adj[node])
  {
    if (it != par)
    {
      dfs(it, adj, node, ans, black, white);
      black[node] += black[it];
      white[node] += black[it];
    }
  }
  ans += black[node] == white[node];
}
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;

    vector<vector<int>> adj(n + 1);
    vector<int> black(n + 1, 0);
    vector<int> white(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
      int par;
      cin >> par;
      adj[par].push_back(i);
    }
    string s;
    cin >> s;

    for (int i = 1; i <= s.size(); i++)
    {
      if (s[i - 1] == 'W')
      {
        white[i] = 1;
      }
      else
      {
        black[i] = 1;
      }
    }
    int ans = 0;
    dfs(1, adj, -1, ans, black, white);

    cout << ans << endl;
  }

  return 0;
}