#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 1; i <= n; i++)
    {
      pq.push(i);
    }
    while (n != 1)
    {
      int a = pq.top();
      pq.pop();
      int b = pq.top();
      pq.pop();
      cout << a << " " << b << endl;
      pq.push(ceil((a + b) / 2));
      n--;
    }
    // cout <<endl;
  }
  return 0;
}