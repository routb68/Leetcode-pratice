class Solution:
    def nextGreatestLetter(self, ltrs: List[str], target: str) -> str:
        ans = 0
        lo, hi = 0, len(ltrs)-1
        while lo <= hi:
            mid = lo + ( hi-lo)//2
            if ltrs[mid]>target:
                ans = mid
                hi = mid-1
            else :
                lo = mid+1
        return ltrs[ans]