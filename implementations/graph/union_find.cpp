// Union-Find / Disjoint Set Union — Phase 5
// Compile: g++ -std=c++17 -Wall union_find.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// With path compression + union by rank, ops are ~O(alpha(n)) ≈ O(1) amortized.
struct DSU {
    vector<int> parent, rank_;
    explicit DSU(int n) : parent(n), rank_(n, 0) {
        iota(parent.begin(), parent.end(), 0); // each node is its own root
    }

    // Find the set representative of x (with path compression).
    int find(int x) {
        // TODO: if parent[x] != x, set parent[x] = find(parent[x]); return parent[x].
        (void)x;
        return x;
    }

    // Merge the sets of a and b. Returns false if already in the same set.
    bool unite(int a, int b) {
        // TODO: find roots; if equal return false; attach smaller rank under larger.
        (void)a; (void)b;
        return false;
    }

    bool connected(int a, int b) { return find(a) == find(b); }
};

int main() {
    DSU dsu(5);
    dsu.unite(0, 1);
    dsu.unite(1, 2);
    cout << "connected(0,2) -> " << boolalpha << dsu.connected(0, 2) << " (expect true)\n";
    cout << "connected(0,3) -> " << dsu.connected(0, 3)              << " (expect false)\n";
    return 0;
}
