// Binary Search Tree — Phase 4
// Compile: g++ -std=c++17 -Wall bst.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

// Insert v, returning the (possibly new) subtree root. Avg O(log n), worst O(n).
TreeNode* insert(TreeNode* root, int v) {
    // TODO: if null, make a node; else recurse left/right by comparison.
    (void)root; (void)v;
    return root;
}

// Does the tree contain v?  Avg O(log n).
bool contains(TreeNode* root, int v) {
    // TODO: walk down comparing v to root->val.
    (void)root; (void)v;
    return false;
}

// In-order traversal fills `out` in sorted order. O(n).
void inorder(TreeNode* root, vector<int>& out) {
    // TODO: left, node, right.
    (void)root; (void)out;
}

int main() {
    TreeNode* root = nullptr;
    for (int v : {5, 3, 8, 1, 4, 7, 9}) root = insert(root, v);
    cout << "contains(4) -> " << boolalpha << contains(root, 4) << " (expect true)\n";
    cout << "contains(6) -> " << contains(root, 6) << " (expect false)\n";
    vector<int> v; inorder(root, v);
    cout << "inorder -> ";
    for (int x : v) cout << x << ' ';
    cout << "(expect 1 3 4 5 7 8 9)\n";
    return 0;
}
