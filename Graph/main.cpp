#include "iostream"
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e5 + 2, MOD = 1e9 + 7;
vi adj[N]; // globally declared vector of Matrix

// Graphs can be implimented using -> Adjecency List and Adjecency matrix
int main()
{
    // adjacency matrix
    int n, m; // n = no. of nodes, m = no. of edges
    cin >> n >> m;

    vvi adjm(n + 1, vi(n + 1, 0));

    rep(i, 0, m)
    {
        int x, y;
        cin >> x >> y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    cout << "Adjecency Matrix" << endl;

    rep(i, 1, n + 1)
    {
        rep(j, 1, n + 1)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }

    // Adjecency list
    rep(i, 0, m)
    {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout << "Adjecency List" << endl;
    rep(i, 1, n + 1)
    {
        cout << i << "-> ";
        vector<int>::iterator it;
        for (it = adj[i].begin(); it != adj[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Input :
7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3
7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3

Output :
Adjecency Matrix
0 1 1 0 0 0 0
1 0 0 1 1 1 1
1 0 0 0 0 0 1
0 1 0 0 0 0 0
0 1 0 0 0 0 0
0 1 0 0 0 0 0
0 1 1 0 0 0 0
Adjecency List
1-> 2 3
2-> 1 4 5 6 7
3-> 1
4-> 2
5-> 2
6-> 2
7-> 7 7 2
*/