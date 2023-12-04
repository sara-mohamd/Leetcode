class Solution:
    def tribonacci(self, n: int) -> int:
        if n == 0:
            return 0
        a, b, c = 0, 1, 1
        for i in range(3, n + 1):
            next_value = a + b + c
            a, b, c = b, c, next_value
        return c
        # elif n == 1 or n == 2:
        #     return 1
        # else:
        #     return self.tribonacci(n - 1) + self.tribonacci(n - 2) + self.tribonacci(n - 3) 