# https://leetcode.com/problems/contains-duplicate-ii/


class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        s =set()
        n= len(nums)
        for i in range(n):
            l = len(s)
            if l >= k+1:
                s.remove(nums[i-k-1])
            if nums[i] in s:
                return 1
            else:
                s.add(nums[i])
        return 0