class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        
        mx = max(nums)
        for i in range(0, mx + 1):
            if i not in nums:
                return i
        return mx + 1