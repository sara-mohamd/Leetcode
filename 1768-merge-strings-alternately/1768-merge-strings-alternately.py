class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        length1 = len(word1)
        length2 = len(word2)
        min_length = min(length1, length2)

        result = ""
        for i in range(min_length):
            result += word1[i] + word2[i]
        result += word1[min_length: ] + word2[min_length: ]
        return result