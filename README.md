# Data Structures & Algorithms Roadmap

🧩 An interactive version of this roadmap lives here: **[DSA Interactive Roadmap](https://pimpalemahesh.github.io/DSA/)**

A structured, phase-by-phase path from fundamentals to advanced topics. Work top to bottom — each phase builds on the last. Check off items as you go.

**Suggested pace:** ~12–16 weeks at 1–2 hours/day. Adjust freely.

> 🎯 Curated practice problems are linked per topic (LeetCode `LC`, NeetCode `NC`). Start with the first link and move down.
> 🧩 An interactive version of this roadmap lives in the artifact link shared alongside this file.
> 💻 Implement each structure from scratch in [`implementations/`](implementations/) as you reach it.

---

## Phase 0 — Prerequisites (Week 1)

- [ ] Pick one language and stick with it (this repo uses **C++**)
- [ ] Language basics: variables, loops, conditionals, functions
- [ ] I/O, `vector`, `string`, `unordered_map`/`unordered_set` in C++
- [ ] References vs. values, pass-by-value/reference semantics
- [ ] How to run, debug, and test small programs (`g++ -std=c++17 file.cpp && ./a.out`)

## Phase 1 — Complexity Analysis (Week 1)

- [ ] Big-O, Big-Θ, Big-Ω notation
- [ ] Time vs. space complexity
- [ ] Best / average / worst case
- [ ] Amortized analysis (e.g. dynamic array resizing)
- [ ] Analyzing loops, nested loops, and recursive calls

> Goal: Given any snippet, state its time and space complexity confidently.

---

## Phase 2 — Core Linear Data Structures (Weeks 2–3)

### Arrays & Strings
- [ ] Traversal, insertion, deletion
- [ ] Two-pointer technique
- [ ] Sliding window
- [ ] Prefix sums / difference arrays
- [ ] In-place operations

**Practice:** [Two Sum (LC 1)](https://leetcode.com/problems/two-sum/) · [Best Time to Buy/Sell Stock (LC 121)](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) · [Container With Most Water (LC 11)](https://leetcode.com/problems/container-with-most-water/) · [Longest Substring Without Repeating (LC 3)](https://leetcode.com/problems/longest-substring-without-repeating-characters/) · [Product of Array Except Self (LC 238)](https://leetcode.com/problems/product-of-array-except-self/)

### Linked Lists
- [ ] Singly, doubly, circular
- [ ] Insert / delete / reverse
- [ ] Fast & slow pointers (cycle detection — Floyd's)
- [ ] Merge two sorted lists

**Practice:** [Reverse Linked List (LC 206)](https://leetcode.com/problems/reverse-linked-list/) · [Linked List Cycle (LC 141)](https://leetcode.com/problems/linked-list-cycle/) · [Merge Two Sorted Lists (LC 21)](https://leetcode.com/problems/merge-two-sorted-lists/) · [Remove Nth Node From End (LC 19)](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

### Stacks & Queues
- [ ] Stack (array & linked-list based)
- [ ] Queue, circular queue
- [ ] Deque
- [ ] Monotonic stack / queue
- [ ] Applications: balanced parentheses, next greater element

**Practice:** [Valid Parentheses (LC 20)](https://leetcode.com/problems/valid-parentheses/) · [Min Stack (LC 155)](https://leetcode.com/problems/min-stack/) · [Daily Temperatures (LC 739)](https://leetcode.com/problems/daily-temperatures/) · [Implement Queue using Stacks (LC 232)](https://leetcode.com/problems/implement-queue-using-stacks/)

### Hashing
- [ ] Hash tables, hash sets, hash maps
- [ ] Collision handling (chaining, open addressing)
- [ ] Frequency counting, grouping problems

**Practice:** [Group Anagrams (LC 49)](https://leetcode.com/problems/group-anagrams/) · [Top K Frequent Elements (LC 347)](https://leetcode.com/problems/top-k-frequent-elements/) · [Longest Consecutive Sequence (LC 128)](https://leetcode.com/problems/longest-consecutive-sequence/)

---

## Phase 3 — Recursion & Sorting (Week 4)

### Recursion & Backtracking
- [ ] Recursion fundamentals & the call stack
- [ ] Base case / recursive case design
- [ ] Subsets, permutations, combinations
- [ ] Backtracking (N-Queens, Sudoku, word search)

**Practice:** [Subsets (LC 78)](https://leetcode.com/problems/subsets/) · [Permutations (LC 46)](https://leetcode.com/problems/permutations/) · [Combination Sum (LC 39)](https://leetcode.com/problems/combination-sum/) · [Word Search (LC 79)](https://leetcode.com/problems/word-search/) · [N-Queens (LC 51)](https://leetcode.com/problems/n-queens/)

### Searching
- [ ] Linear search
- [ ] Binary search (and on answer / monotonic predicate)
- [ ] Binary search variants (first/last occurrence, rotated array)

**Practice:** [Binary Search (LC 704)](https://leetcode.com/problems/binary-search/) · [Search in Rotated Sorted Array (LC 33)](https://leetcode.com/problems/search-in-rotated-sorted-array/) · [Koko Eating Bananas (LC 875)](https://leetcode.com/problems/koko-eating-bananas/) · [Median of Two Sorted Arrays (LC 4)](https://leetcode.com/problems/median-of-two-sorted-arrays/)

### Sorting
- [ ] Bubble, selection, insertion (understand, don't memorize)
- [ ] Merge sort
- [ ] Quick sort (+ partitioning)
- [ ] Heap sort
- [ ] Counting / radix / bucket sort
- [ ] Stability and when each sort is appropriate

**Practice:** [Sort an Array (LC 912)](https://leetcode.com/problems/sort-an-array/) · [Sort Colors (LC 75)](https://leetcode.com/problems/sort-colors/) · [Merge Intervals (LC 56)](https://leetcode.com/problems/merge-intervals/)

---

## Phase 4 — Trees & Heaps (Weeks 5–6)

### Trees
- [ ] Binary trees, terminology
- [ ] Traversals: pre / in / post-order, level-order (BFS)
- [ ] Recursive vs. iterative traversals
- [ ] Binary Search Trees (BST): insert, delete, search
- [ ] Balanced trees concept (AVL, Red-Black — high level)
- [ ] Lowest Common Ancestor, height/diameter, path problems

**Practice:** [Invert Binary Tree (LC 226)](https://leetcode.com/problems/invert-binary-tree/) · [Max Depth (LC 104)](https://leetcode.com/problems/maximum-depth-of-binary-tree/) · [Level Order Traversal (LC 102)](https://leetcode.com/problems/binary-tree-level-order-traversal/) · [Validate BST (LC 98)](https://leetcode.com/problems/validate-binary-search-tree/) · [LCA of BST (LC 235)](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)

### Heaps / Priority Queues
- [ ] Min-heap / max-heap
- [ ] Build heap, push, pop, heapify
- [ ] Top-K problems, k-way merge
- [ ] Median from a data stream (two heaps)

**Practice:** [Kth Largest in Array (LC 215)](https://leetcode.com/problems/kth-largest-element-in-an-array/) · [Merge K Sorted Lists (LC 23)](https://leetcode.com/problems/merge-k-sorted-lists/) · [Find Median from Data Stream (LC 295)](https://leetcode.com/problems/find-median-from-data-stream/)

### Tries
- [ ] Trie insert / search / prefix
- [ ] Autocomplete, word dictionary problems

**Practice:** [Implement Trie (LC 208)](https://leetcode.com/problems/implement-trie-prefix-tree/) · [Word Search II (LC 212)](https://leetcode.com/problems/word-search-ii/)

---

## Phase 5 — Graphs (Weeks 7–8)

- [ ] Representations: adjacency list vs. matrix
- [ ] BFS and DFS (iterative & recursive)
- [ ] Connected components
- [ ] Cycle detection (directed & undirected)
- [ ] Topological sort (Kahn's & DFS)
- [ ] Shortest paths: Dijkstra, Bellman-Ford, 0-1 BFS
- [ ] All-pairs: Floyd-Warshall
- [ ] Minimum Spanning Tree: Prim's, Kruskal's
- [ ] Union-Find / Disjoint Set Union (with path compression + union by rank)

**Practice:** [Number of Islands (LC 200)](https://leetcode.com/problems/number-of-islands/) · [Clone Graph (LC 133)](https://leetcode.com/problems/clone-graph/) · [Course Schedule (LC 207)](https://leetcode.com/problems/course-schedule/) · [Network Delay Time — Dijkstra (LC 743)](https://leetcode.com/problems/network-delay-time/) · [Redundant Connection — DSU (LC 684)](https://leetcode.com/problems/redundant-connection/) · [Min Cost to Connect Points — MST (LC 1584)](https://leetcode.com/problems/min-cost-to-connect-all-points/)

---

## Phase 6 — Dynamic Programming (Weeks 9–11)

- [ ] Memoization (top-down) vs. tabulation (bottom-up)
- [ ] Identifying overlapping subproblems & optimal substructure
- [ ] **1D DP:** Fibonacci, climbing stairs, house robber
- [ ] **Knapsack family:** 0/1 knapsack, subset sum, coin change
- [ ] **Sequences:** LIS, LCS, edit distance
- [ ] **Grid DP:** unique paths, min path sum
- [ ] **Interval DP:** matrix chain multiplication, burst balloons
- [ ] **DP on trees**
- [ ] **Bitmask DP** (intro)
- [ ] Space optimization techniques

**Practice:** [Climbing Stairs (LC 70)](https://leetcode.com/problems/climbing-stairs/) · [House Robber (LC 198)](https://leetcode.com/problems/house-robber/) · [Coin Change (LC 322)](https://leetcode.com/problems/coin-change/) · [Longest Increasing Subsequence (LC 300)](https://leetcode.com/problems/longest-increasing-subsequence/) · [Longest Common Subsequence (LC 1143)](https://leetcode.com/problems/longest-common-subsequence/) · [Edit Distance (LC 72)](https://leetcode.com/problems/edit-distance/) · [Unique Paths (LC 62)](https://leetcode.com/problems/unique-paths/)

> DP is the hardest phase for most. Do 40–60 problems here, in increasing difficulty.

---

## Phase 7 — Advanced Topics (Weeks 12+)

- [ ] Greedy algorithms & exchange-argument proofs
- [ ] Advanced binary search on answer
- [ ] Segment trees & Fenwick (Binary Indexed) trees
- [ ] Bit manipulation tricks
- [ ] String algorithms: KMP, Rabin-Karp, Z-algorithm
- [ ] Advanced graphs: SCC (Tarjan/Kosaraju), bridges, articulation points
- [ ] Number theory: sieve, GCD/LCM, modular arithmetic
- [ ] Math: combinatorics basics
- [ ] (Optional) Suffix arrays, heavy-light decomposition, LCA with binary lifting

**Practice:** [Range Sum Query Mutable — Segment/Fenwick (LC 307)](https://leetcode.com/problems/range-sum-query-mutable/) · [Single Number (LC 136)](https://leetcode.com/problems/single-number/) · [Implement strStr() — KMP (LC 28)](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) · [Jump Game — Greedy (LC 55)](https://leetcode.com/problems/jump-game/) · [Count Primes — Sieve (LC 204)](https://leetcode.com/problems/count-primes/)

---

## Practice Strategy

1. **Learn the concept** → implement the data structure/algorithm from scratch once (see [`implementations/`](implementations/)).
2. **Solve easy problems** to lock in the pattern.
3. **Progress to medium**, then a few hard problems per topic.
4. **Revisit** problems you failed after a week (spaced repetition).
5. Track patterns, not just problems — most interview questions are variations of ~15 patterns.

**Recommended platforms:** [LeetCode](https://leetcode.com/) · [NeetCode 150](https://neetcode.io/practice) · [Codeforces](https://codeforces.com/) (contests) · [HackerRank](https://www.hackerrank.com/).

**Rough problem targets per phase:** 20–30 problems for Phases 2–5, 40–60 for DP.

---

## The 15 Core Patterns (keep this handy)

| Pattern | Use when |
|---|---|
| Two Pointers | Sorted array, pair/triplet, in-place |
| Sliding Window | Contiguous subarray/substring, "max/min window" |
| Fast & Slow Pointers | Cycles, middle of list |
| Merge Intervals | Overlapping ranges |
| Binary Search | Sorted data or monotonic answer space |
| BFS / DFS | Trees & graphs traversal |
| Backtracking | Generate all combinations/permutations |
| Top-K Elements | Heap / priority queue |
| Monotonic Stack | Next greater/smaller element |
| Union-Find | Connectivity, grouping |
| Topological Sort | Ordering with dependencies |
| Prefix Sum | Range sum queries |
| Dynamic Programming | Optimal substructure + overlapping subproblems |
| Greedy | Local optimum → global optimum |
| Bit Manipulation | Sets as integers, parity, masks |

---

*Tip: Build each structure from scratch in [`implementations/`](implementations/) as you reach it. Teaching-by-doing beats reading every time.*
