// Two Pointers — Phase 2 (Arrays & Strings)
// Compile: g++ -std=c++17 -Wall two_pointers.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// Given a SORTED array, return indices (0-based) of two numbers adding to target.
// Return {-1,-1} if none. Time: O(n), Space: O(1).
pair<int,int> twoSumSorted(const vector<int>& a, int target) {
    // TODO: use a left pointer at 0 and right pointer at a.size()-1.
    //       move inward based on whether sum < / > / == target.
    (void)a; (void)target;
    return {-1, -1};
}

// Reverse the array in place. Time: O(n), Space: O(1).
void reverseInPlace(vector<int>& a) {
    // TODO: swap ends moving toward the middle.
    (void)a;
}

int main() {
    vector<int> a = {1, 3, 4, 5, 7, 11};
    auto [i, j] = twoSumSorted(a, 9); // expect indices of 4 and 5 -> (2,3)
    cout << "twoSumSorted -> (" << i << "," << j << ")\n";

    vector<int> b = {1, 2, 3, 4, 5};
    reverseInPlace(b);
    cout << "reversed -> ";
    for (int x : b) cout << x << ' ';
    cout << "\n";
    return 0;
}
