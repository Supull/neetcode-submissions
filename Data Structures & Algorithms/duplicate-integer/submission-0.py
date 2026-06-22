class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        status = false 
        freq = {}
        for x in num:
            freq[x] = freq.get(x,0) + 1
        
        for key in freq:
            if freq[key] > 1:
                status = true
            else:
                status = false
        return status