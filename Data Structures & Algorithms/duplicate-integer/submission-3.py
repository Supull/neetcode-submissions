class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        status = False 
        freq = {}
        for x in nums:
            freq[x] = freq.get(x,0) + 1
        
        for key in freq:
            if freq[key] > 1:
                return True
        return status