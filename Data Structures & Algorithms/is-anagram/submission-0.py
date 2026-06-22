class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s1 = set(s)
        s2 = set(t)

        if (s1.issubset(s2)):
            return True
        else: 
            return False
        