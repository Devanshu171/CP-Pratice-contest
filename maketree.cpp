#include <bits/stdc++.h>
using namespace std;
vector<int> parent(100010), tp;
void topo(int node, vector<int> adj[], vector<int> &vis)
{
  vis[node] = 1;
  for (auto it : adj[node])
  {
    if (vis[it])
      topo(it, adj, vis);
  }
  tp.push_back(node);
}
int main()
{
  int n, v;
  cin >> n >> v;
  vector<int> adj[v + 1];
  vector<int> vis(v + 1, 0);
  for (int i = 1; i <= v; i++)
  {
    int x;
    cin >> x;
    for (int j = 0; i < x; j++)
    {
      int y;
      cin >> y;
      adj[i].push_back(y);
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (!vis[i])
      topo(i, adj, vis);
  }
  int p = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    parent[tp[i]] = p;
    p = tp[i];
  }
  for (int i = 1; i <= n; i++)
    cout << parent[i] << endl;
  return 0;
}