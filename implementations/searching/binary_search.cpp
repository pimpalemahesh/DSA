// Binary Search + variants — Phase 3
// Compile: g++ -std=c++17 -Wall binary_search.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// Classic: index of target in a sorted array, or -1. Time: O(log n).
int search(const vector<int>& a, int target) {
    // TODO: maintain [lo, hi]; compare a[mid] to target; halve the range.
    (void)a; (void)target;
    return -1;
}

// First index i with a[i] >= target (lower_bound). Returns a.size() if none.
// This "leftmost" template generalizes to many binary-search-on-answer problems.
int lowerBound(const vector<int>& a, int target) {
    // TODO: search in [0, n]; shrink hi when a[mid] >= target, else lo = mid+1.
    (void)a; (void)target;
    return (int)a.size();
}

int main() {
    vector<int> a = {1, 3, 3, 5, 7, 9};
    cout << "search(5)     -> " << search(a, 5)     << " (expect 3)\n";
    cout << "search(4)     -> " << search(a, 4)     << " (expect -1)\n";
    cout << "lowerBound(3) -> " << lowerBound(a, 3) << " (expect 1)\n";
    cout << "lowerBound(6) -> " << lowerBound(a, 6) << " (expect 4)\n";
    return 0;
}
