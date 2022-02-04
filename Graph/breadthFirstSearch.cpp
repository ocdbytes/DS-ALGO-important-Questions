#include "iostream"
#include <vector>
#include <queue>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e5 + 2, MOD = 1e9 + 7;
bool vis[N];
vector<int> adj[N];

int main()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    int n, m;
    cin >> n >> m;

    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // Binary First Search is implimented using queue

    queue<int> q;
    q.push(1);
    vis[1] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << endl;

        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!vis[*it])
            {
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }

    return 0;
}
