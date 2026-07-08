// Sliding Window — Phase 2 (Arrays & Strings)
// Compile: g++ -std=c++17 -Wall sliding_window.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// Max sum of any contiguous subarray of length k. Time: O(n), Space: O(1).
long long maxSumWindow(const vector<int>& a, int k) {
    // TODO: build the first window sum, then slide: add a[i], remove a[i-k].
    (void)a; (void)k;
    return 0;
}

// Length of the longest substring without repeating characters.
// Time: O(n), Space: O(charset).
int longestUniqueSubstring(const string& s) {
    // TODO: grow a window; when a duplicate enters, shrink from the left.
    //       track last-seen index of each char.
    (void)s;
    return 0;
}

int main() {
    cout << "maxSumWindow -> " << maxSumWindow({2, 1, 5, 1, 3, 2}, 3) << " (expect 9)\n";
    cout << "longestUnique -> " << longestUniqueSubstring("abcabcbb") << " (expect 3)\n";
    return 0;
}
