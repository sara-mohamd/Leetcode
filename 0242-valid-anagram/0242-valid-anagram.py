from collections import Counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # if len(s) == len(t):
        #     sentence = set()
        #     for var in s:
        #         if var in set(t):
        #             sentence.add(var)
        #     if len(set(s)) == len(sentence):
        #         return True
        # return False
        return Counter(s) == Counter(t)
