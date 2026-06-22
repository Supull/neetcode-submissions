class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        status = False 
        freq = {}
        for x in nums:
            freq[x] = freq.get(x,0) + 1
        
        for key in freq:
            if freq[key] > 1:
                status = True
            else:
                status = False
        return status