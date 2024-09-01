class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # input => [1,2,3,1]
        # if nums:
        #     for num in range(len(nums)):
        #         for x in range(num + 1, len(nums)):
        #             # num = 0
        #             # x (1, 2, 3)
        #             # if 1 == 3
        #             if nums[num] == nums[x]:
        #                 return True
        # return False
        seen = set()
        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        return False
