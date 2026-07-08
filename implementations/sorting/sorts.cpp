// Sorting algorithms — Phase 3
// Compile: g++ -std=c++17 -Wall sorts.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// Merge sort. Time: O(n log n), Space: O(n), stable.
void mergeSort(vector<int>& a) {
    // TODO: split in half, recurse, then merge the two sorted halves.
    (void)a;
}

// Quick sort. Time: O(n log n) avg / O(n^2) worst, Space: O(log n), not stable.
void quickSort(vector<int>& a, int lo, int hi) {
    // TODO: pick a pivot, partition around it, recurse on both sides.
    (void)a; (void)lo; (void)hi;
}

bool isSorted(const vector<int>& a) {
    return is_sorted(a.begin(), a.end());
}

int main() {
    vector<int> a = {5, 2, 9, 1, 5, 6};
    mergeSort(a);
    cout << "mergeSort sorted? " << boolalpha << isSorted(a) << "\n";

    vector<int> b = {5, 2, 9, 1, 5, 6};
    quickSort(b, 0, (int)b.size() - 1);
    cout << "quickSort sorted? " << isSorted(b) << "\n";
    return 0;
}
