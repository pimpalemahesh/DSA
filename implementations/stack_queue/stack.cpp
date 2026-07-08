// Stack (array-based) + application — Phase 2
// Compile: g++ -std=c++17 -Wall stack.cpp -o /tmp/out && /tmp/out
#include <bits/stdc++.h>
using namespace std;

// A minimal dynamic-array stack. All ops amortized O(1).
struct Stack {
    vector<int> data;

    void push(int x) { /* TODO */ (void)x; }
    void pop()       { /* TODO: guard against empty */ }
    int  top() const { /* TODO */ return -1; }
    bool empty() const { /* TODO */ return true; }
    int  size()  const { /* TODO */ return 0; }
};

// Application: are the brackets balanced?  "()[]{}" -> true, "(]" -> false.
// Time: O(n), Space: O(n).
bool balancedParens(const string& s) {
    // TODO: push openers; on a closer, the stack top must be its match.
    (void)s;
    return false;
}

int main() {
    Stack st;
    st.push(10); st.push(20);
    cout << "top -> " << st.top() << " (expect 20)\n";
    st.pop();
    cout << "top -> " << st.top() << " (expect 10)\n";
    cout << "balanced '([{}])' -> " << boolalpha << balancedParens("([{}])") << " (expect true)\n";
    cout << "balanced '(]'     -> " << balancedParens("(]") << " (expect false)\n";
    return 0;
}
