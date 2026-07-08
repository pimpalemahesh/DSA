// Min-Heap (binary heap) — Phase 4
// Compile: g++ -std=c++17 -Wall min_heap.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// Array-backed binary min-heap. For node i: parent=(i-1)/2, kids=2i+1, 2i+2.
struct MinHeap {
    vector<int> h;

    // push: O(log n) — append then sift up.
    void push(int x) { /* TODO */ (void)x; }

    // pop the minimum: O(log n) — swap root with last, drop it, sift down.
    void pop() { /* TODO */ }

    // peek the minimum: O(1).
    int top() const { /* TODO */ return INT_MIN; }

    bool empty() const { return h.empty(); }

    // helpers you'll likely want:
    // void siftUp(int i);
    // void siftDown(int i);
};

int main() {
    MinHeap heap;
    for (int x : {5, 1, 8, 3, 2}) heap.push(x);
    cout << "drained -> ";
    while (!heap.empty()) { cout << heap.top() << ' '; heap.pop(); }
    cout << "(expect 1 2 3 5 8)\n";
    return 0;
}
