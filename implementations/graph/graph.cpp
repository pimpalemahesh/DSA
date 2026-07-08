// Graph (adjacency list) + BFS/DFS — Phase 5
// Compile: g++ -std=c++17 -Wall graph.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

struct Graph {
    int n;
    vector<vector<int>> adj;
    explicit Graph(int n) : n(n), adj(n) {}

    void addEdge(int u, int v, bool directed = false) {
        adj[u].push_back(v);
        if (!directed) adj[v].push_back(u);
    }

    // BFS order from src. Time: O(V + E).
    vector<int> bfs(int src) {
        vector<int> order;
        // TODO: queue + visited[]; enqueue src, expand neighbors level by level.
        (void)src;
        return order;
    }

    // DFS order from src (recursive). Time: O(V + E).
    vector<int> dfs(int src) {
        vector<int> order;
        vector<bool> seen(n, false);
        // TODO: recursive helper(u): mark, record, recurse unvisited neighbors.
        (void)src; (void)seen;
        return order;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1); g.addEdge(0, 2); g.addEdge(1, 3); g.addEdge(2, 4);
    cout << "bfs(0) size -> " << g.bfs(0).size() << " (expect 5)\n";
    cout << "dfs(0) size -> " << g.dfs(0).size() << " (expect 5)\n";
    return 0;
}
