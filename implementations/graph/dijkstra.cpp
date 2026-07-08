// Dijkstra's shortest paths — Phase 5
// Compile: g++ -std=c++17 -Wall dijkstra.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// Weighted graph as adjacency list of (neighbor, weight). Non-negative weights.
// Returns shortest distance from src to every node (INF if unreachable).
// Time: O((V + E) log V) with a binary heap.
vector<long long> dijkstra(int n, const vector<vector<pair<int,int>>>& adj, int src) {
    const long long INF = LLONG_MAX;
    vector<long long> dist(n, INF);
    // TODO: min-priority_queue of (dist, node). Pop the closest, relax its edges,
    //       skip stale entries (popped dist > dist[node]).
    (void)adj; (void)src;
    return dist;
}

int main() {
    // 0 --1--> 1 --2--> 2 ;  0 --4--> 2
    int n = 3;
    vector<vector<pair<int,int>>> adj(n);
    adj[0] = {{1, 1}, {2, 4}};
    adj[1] = {{2, 2}};
    auto d = dijkstra(n, adj, 0);
    cout << "dist -> ";
    for (long long x : d) cout << (x == LLONG_MAX ? -1 : x) << ' ';
    cout << "(expect 0 1 3)\n";
    return 0;
}
