// Backtracking — Phase 3
// Compile: g++ -std=c++17 -Wall backtracking.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// All subsets (power set) of nums. Time: O(n * 2^n).
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> out;
    vector<int> path;
    // TODO: define a recursive helper(start): record path, then for each
    //       i >= start, choose nums[i], recurse with start=i+1, un-choose.
    (void)nums; (void)path;
    return out;
}

// All permutations of nums. Time: O(n * n!).
vector<vector<int>> permutations(vector<int>& nums) {
    vector<vector<int>> out;
    // TODO: swap-based or used[] approach; fix one position at a time.
    (void)nums;
    return out;
}

int main() {
    vector<int> a = {1, 2, 3};
    cout << "subsets count      -> " << subsets(a).size()      << " (expect 8)\n";
    cout << "permutations count -> " << permutations(a).size() << " (expect 6)\n";
    return 0;
}
