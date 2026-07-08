# Implementations

Implement each data structure and algorithm from scratch here as you work through the [roadmap](../ROADMAP.md). Each file is a **skeleton with TODOs** — fill in the bodies yourself, then run the built-in `main()` to test.

## Build & run

```bash
g++ -std=c++17 -Wall -Wextra -g arrays/two_pointers.cpp -o /tmp/out && /tmp/out
```

Or drop this helper in your shell:

```bash
run() { g++ -std=c++17 -Wall -Wextra -g "$1" -o /tmp/dsa_out && /tmp/dsa_out; }
# usage: run trees/bst.cpp
```

## Layout (maps to roadmap phases)

| Folder | Phase | Files |
|---|---|---|
| `arrays/` | 2 | `two_pointers.cpp`, `sliding_window.cpp` |
| `linked_list/` | 2 | `singly_linked_list.cpp` |
| `stack_queue/` | 2 | `stack.cpp` |
| `searching/` | 3 | `binary_search.cpp` |
| `sorting/` | 3 | `sorts.cpp` |
| `recursion/` | 3 | `backtracking.cpp` |
| `trees/` | 4 | `bst.cpp`, `traversals.cpp` |
| `heap/` | 4 | `min_heap.cpp` |
| `trie/` | 4 | `trie.cpp` |
| `graph/` | 5 | `graph.cpp`, `dijkstra.cpp`, `union_find.cpp` |
| `dp/` | 6 | `dp_basics.cpp` |

## How to use each file

1. Read the complexity notes and the function signatures.
2. Replace each `// TODO` with your implementation.
3. Compile and run — the `main()` has small assertions/prints to check yourself.
4. Only after it passes, compare against a reference solution.
