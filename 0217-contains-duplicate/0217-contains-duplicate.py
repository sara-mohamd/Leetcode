class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dup = set()

        for num in nums:
            if num in dup:
                return True
            else:
                dup.add(num)
        return False