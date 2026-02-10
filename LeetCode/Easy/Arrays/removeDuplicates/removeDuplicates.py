class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i, j = 0, 1
        n = len(nums)
        k = n
        while j < n:
            while nums[i] == nums[j]:
                if j < n-1:
                    j += 1
                    k -= 1
                else:
                    k -= 1
                    break
            nums[i+1] = nums[j]
            i += 1
            j += 1
        return k
        