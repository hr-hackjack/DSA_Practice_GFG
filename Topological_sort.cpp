/**
 * Title   : Topological sort
 * Code by : hr-hackjack
 * Link    : https://practice.geeksforgeeks.org/problems/topological-sort/1
 **/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector <int> topoSort(int N, vector<int> adj[]);

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
bool check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return false;
        }
    }
    return true;
}

// Driver Code
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        vector <int> res = topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
}// } Driver Code Ends


// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*/

void dfsUtil(int v, bool visited[], vector<int> adj[], stack<int> &s) {
    visited[v] = true;
    for(auto i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            dfsUtil(*i, visited, adj, s);
    s.push(v);
}

vector<int> topoSort(int V, vector<int> adj[]) {

    bool *visited = new bool[V];
    for (int i = 0; i < V; ++i)
        visited[i] = false;

    stack<int> s;

    for (int i = 0; i < V; ++i)
        if (!visited[i])
            dfsUtil(i, visited, adj, s);

    delete[] visited;

    vector <int> res;

    while (!s.empty()) {
        res.push_back(s.top());
        s.pop();
    }

    return res;
}
