// Singly Linked List — Phase 2
// Compile: g++ -std=c++17 -Wall singly_linked_list.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

// Push to front. Time: O(1).
Node* pushFront(Node* head, int v) {
    // TODO: create a node pointing at head, return it as the new head.
    (void)head; (void)v;
    return head;
}

// Reverse the list iteratively. Time: O(n), Space: O(1).
Node* reverse(Node* head) {
    // TODO: walk the list carrying prev/curr; flip each next pointer.
    (void)head;
    return head;
}

// Detect a cycle (Floyd's fast & slow pointers). Time: O(n), Space: O(1).
bool hasCycle(Node* head) {
    // TODO: advance slow by 1 and fast by 2; they meet iff a cycle exists.
    (void)head;
    return false;
}

void print(Node* head) {
    for (Node* p = head; p; p = p->next) cout << p->val << " -> ";
    cout << "null\n";
}

int main() {
    Node* head = nullptr;
    for (int v : {3, 2, 1}) head = pushFront(head, v); // expect 1 -> 2 -> 3
    print(head);
    head = reverse(head);
    print(head); // expect 3 -> 2 -> 1
    cout << "hasCycle -> " << boolalpha << hasCycle(head) << " (expect false)\n";
    return 0;
}
