// Dynamic Programming basics — Phase 6
// Compile: g++ -std=c++17 -Wall dp_basics.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// Climbing stairs: ways to reach step n taking 1 or 2 steps. O(n) time, O(1) space.
int climbStairs(int n) {
    // TODO: dp[i] = dp[i-1] + dp[i-2]; keep only the last two values.
    (void)n;
    return 0;
}

// Coin change: fewest coins to make `amount`, or -1 if impossible.
// O(amount * coins) time, O(amount) space.
int coinChange(const vector<int>& coins, int amount) {
    // TODO: dp[a] = min over coins c of dp[a-c]+1; dp[0]=0, rest = INF.
    (void)coins; (void)amount;
    return -1;
}

// Longest common subsequence length of a and b. O(n*m) time.
int lcs(const string& a, const string& b) {
    // TODO: 2D table; if a[i]==b[j] -> 1+diag, else max(up, left).
    (void)a; (void)b;
    return 0;
}

int main() {
    cout << "climbStairs(5) -> " << climbStairs(5) << " (expect 8)\n";
    cout << "coinChange({1,2,5}, 11) -> " << coinChange({1, 2, 5}, 11) << " (expect 3)\n";
    cout << "lcs('abcde','ace') -> " << lcs("abcde", "ace") << " (expect 3)\n";
    return 0;
}
