#include <bits/stdc++.h>
using namespace std;
bool check(int node, int p, vector<int> &vis, vector<int> adj[], int &cnt)
{
  if (vis[node] = 1)
    return true;
  vis[node] = 1;
  for (auto it : adj[node])
  {
    if (it != p)
      cnt++;

    if (check(it, node, vis, adj, cnt))
      return true;
  }
  return false;
}
int main()
{
  int n, v;
  cin >> n >> v;
  vector<int> adj[n + 1];
  // queue<pair<int, int>> q;
  vector<int> vis(v + 1, 0);
  for (int i = 0; i < v; i++)
  {
    int u, l;
    cin >> u >> l;
    adj[u].push_back(l);
    adj[l].push_back(u);
  }
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    int count = 0;

    if (check(i, -1, vis, adj, count))
      ans += (count % 2 == 1);
  }
  if ((n - ans) % 2 == 1)
    ans++;
  cout << ans;

  return 0;
}