class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        return next((i for i, value in enumerate(nums) if value >= target), len(nums))
        
        # next() : retrieve next item for an iterator and if there is no return
        # value it gonna return default value which is here len(nums)

        # enumerate() : return loop over iterator and return (index, value)
        
        # Condition if value >= target as if the item doesn't exist you can 
        # determin its position using '>' operator . 