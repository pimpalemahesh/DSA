// Trie (prefix tree) — Phase 4
// Compile: g++ -std=c++17 -Wall trie.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

struct Trie {
    struct TNode {
        array<TNode*, 26> kids{}; // value-initialized to nullptr
        bool end = false;
    };
    TNode* root = new TNode();

    // Insert a lowercase word. Time: O(len).
    void insert(const string& word) {
        // TODO: walk/create a child per char; mark the last node as end.
        (void)word;
    }

    // Is `word` a complete inserted word? Time: O(len).
    bool search(const string& word) {
        // TODO: walk; return false if a link is missing; return node->end.
        (void)word;
        return false;
    }

    // Does any inserted word start with `prefix`? Time: O(len).
    bool startsWith(const string& prefix) {
        // TODO: same walk as search but ignore the `end` flag.
        (void)prefix;
        return false;
    }
};

int main() {
    Trie t;
    t.insert("apple");
    cout << "search('apple')     -> " << boolalpha << t.search("apple")     << " (expect true)\n";
    cout << "search('app')       -> " << t.search("app")                    << " (expect false)\n";
    cout << "startsWith('app')   -> " << t.startsWith("app")                << " (expect true)\n";
    return 0;
}
