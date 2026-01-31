# Solution: Remove Element

## Problem Description

Remove all occurrences of a specific value (`val`) from an array (`nums`) **in-place**, returning the number of elements that are not equal to `val`.

## Algorithmic Approach

The solution implements the **two-pointer** technique with in-place modification, avoiding allocation of auxiliary data structures.

### Algorithm Mechanics

The algorithm maintains two pointers:
- **`i`**: iterative pointer that traverses the array sequentially
- **`n`**: dynamic upper bound that compacts valid space as elements are removed

**Operation Logic:**

1. While `i < n`:
   - If `nums[i] == val`: perform in-place swap with the element at index `n-1` and decrement `n`
   - Otherwise: increment `i` to advance the verification window

2. Return `n`: quantity of retained elements (the first k elements of the array)

This approach ensures that all elements equal to `val` are displaced to the final positions of the original array, leaving the first `k` elements with the desired values.

## Complexity Analysis

### Time Complexity

**T(n) = O(n)**

- Each element is visited at most once by pointer `i`
- Elementary operations (comparison, assignment, arithmetic) execute in constant time
- No nested iterations or recursive structures

### Space Complexity

**S(n) = O(1)**

- Constant auxiliary space: only scalar variables (`i`, `n`)
- In-place modification: uses the input array itself as working buffer
- No allocation of dynamic structures (lists, queues, stacks, etc.)

## Technical Characteristics

| Aspect | Description |
|--------|-------------|
| **Paradigm** | Iterative with two-pointer |
| **Strategy** | Partition-like (similar to QuickSort partition algorithm) |
| **Modification** | In-place (no new array created) |
| **Stability** | Non-stable (relative order not preserved) |
| **Memory Access** | Sequential (cache-friendly) |

## Execution Example

```
Input: nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
Output: k = 5, nums[:5] = [0, 1, 3, 0, 4]

Step-by-step:
i=0: nums[0]=0 ≠ 2, i++ → i=1
i=1: nums[1]=1 ≠ 2, i++ → i=2
i=2: nums[2]=2 = 2, swap(nums[2], nums[7]), n-- → n=7
i=2: nums[2]=2 = 2, swap(nums[2], nums[6]), n-- → n=6
i=2: nums[2]=4 ≠ 2, i++ → i=3
i=3: nums[3]=2 = 2, swap(nums[3], nums[5]), n-- → n=5
i=3: nums[3]=0 ≠ 2, i++ → i=4
i=4: i=4 ≥ n=5, terminates
```

## Optimality

The solution is **optimal** in theoretical sense:

- **Temporal lower bound**: Ω(n) — necessary to examine each element at least once
- **Maximum space efficiency**: O(1) — no auxiliary structures
- **Alignment with bounds**: T(n) = Θ(n) and S(n) = O(1) indicate asymptotically efficient implementation

## Variations and Context

This approach is used in problem variations such as:
- Duplicate removal
- Zero movement/partitioning
- Array partitioning schemes
- In-place compaction problems
