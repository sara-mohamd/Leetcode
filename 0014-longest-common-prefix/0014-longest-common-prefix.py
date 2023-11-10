class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s = ""
        flag = True
        for i in range(len(strs[0])):
            for j in range(1, len(strs)):
                if i >= len(strs[j]) or strs[j][i] != strs[j - 1][i]:
                    flag = False
                    break

            if not flag:
                break

            s += strs[0][i]

        return s