class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s1 = set(s)
        s2 = set(t)

        status = False

        if len(s1) == len(s2):
            status = True
        else:
            status = False
        if (s1.issubset(s2) and status):
            return True
        else: 
            return False
        