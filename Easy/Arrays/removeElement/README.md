# removeElement

Remove all instances of a value in-place and return the new length.

Problem

- Given an array `nums` and a value `val`, remove all instances of `val` in-place.
- The order of elements can be changed. You should not allocate extra space for another array.

Examples

- Input: nums = [3,2,2,3], val = 3

  - Output length: 2
  - Modified array prefix: [2,2]

- Input: nums = [0,1,2,2,3,0,4,2], val = 2
  - Output length: 5
  - Modified array prefix: [0,1,3,0,4]

Constraints

- Do the removals in-place with O(1) extra memory.

Approaches

- Two pointers (stable order):

  - `i` tracks the position to write the next kept element.
  - `j` scans the array.
  - If `nums[j] != val`, write `nums[i] = nums[j]` and `i++`.
  - Return `i`.

- Swap-with-end (when order doesn't matter):
  - Use `i` from start and `n` as the current array end.
  - If `nums[i] == val`, swap with `nums[n-1]` and decrement `n`.
  - Else `i++`.
  - Finish when `i >= n`. Return `n`.

Complexity

- Time: O(n).
- Space: O(1).

Tips and reminders (in my style)

- If order matters, use the write-pointer approach.
- If order can change and you want fewer writes, swap-with-end is neat.
- Dry-run small examples to feel the pointer movement.

Small code sketch (pseudocode - write-pointer)

```
i = 0
for j in 0...nums.length-1
  if nums[j] != val
    nums[i] = nums[j]
    i += 1
return i
```
