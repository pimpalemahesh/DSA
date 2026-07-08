// Binary Tree Traversals — Phase 4
// Compile: g++ -std=c++17 -Wall traversals.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

// Level-order (BFS) traversal, one inner vector per level. O(n).
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> out;
    // TODO: use a queue; process the current level's size before descending.
    (void)root;
    return out;
}

// Iterative pre-order using an explicit stack. O(n).
vector<int> preorderIterative(TreeNode* root) {
    vector<int> out;
    // TODO: push root; pop-visit, then push right child then left child.
    (void)root;
    return out;
}

int main() {
    // Tree:      1
    //           / \
    //          2   3
    //         / \
    //        4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "levels -> " << levelOrder(root).size() << " (expect 3)\n";
    cout << "preorder -> ";
    for (int x : preorderIterative(root)) cout << x << ' ';
    cout << "(expect 1 2 4 5 3)\n";
    return 0;
}
