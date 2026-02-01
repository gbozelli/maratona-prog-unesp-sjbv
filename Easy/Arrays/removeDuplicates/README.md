# removeDuplicates

Remove duplicates from a sorted array in-place and return the new length.

Problem

- Given a sorted array `nums`, remove the duplicates so that each element appears only once.
- Do this in-place with O(1) extra memory.

Examples

- Input: [1,1,2]

  - Output length: 2
  - Modified array prefix: [1,2]

- Input: [0,0,1,1,1,2,2,3,3,4]
  - Output length: 5
  - Modified array prefix: [0,1,2,3,4]

Constraints

- The array is already sorted.
- You must modify the array in-place.

Approach (Two pointers)

- Use one pointer `i` for the position of the last unique element found.
- Use another pointer `j` to scan the array.
- When `nums[j] != nums[i]`, increment `i` and write `nums[i] = nums[j]`.
- At the end, the new length is `i + 1`.

Step-by-step

- Start `i = 0` (first element is always kept if array non-empty).
- For `j` from 1 to end:
  - If `nums[j]` is different, move `i` one step and copy `nums[j]` there.
- Return `i + 1`.

Complexity

- Time: O(n) — single pass.
- Space: O(1) — in-place.

Tips and reminders (in my style)

- Think of `i` as the end of the result array.
- Every time you find a new number, extend that result by one.
- Work with simple examples on paper first.

Small code sketch (pseudocode)

```
if nums.empty?
	return 0
i = 0
for j in 1...nums.length-1
	if nums[j] != nums[i]
		i += 1
		nums[i] = nums[j]
return i + 1
```
