class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s) == len(t):
            ss = sorted(s)
            tt = sorted(t)

            for i in range(0, len(s)):
                if ss[i] != tt[i]:
                    return False
            return True
        else:
            return False

        

