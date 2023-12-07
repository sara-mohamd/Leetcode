class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        x = sorted(nums).copy()
        sol = [x[i] for i in range(len(x) - 1) if x[i] == x[i + 1]]
        return sol