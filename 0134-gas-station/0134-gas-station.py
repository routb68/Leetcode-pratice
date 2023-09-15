class Solution:
    def canCompleteCircuit(self, gs: List[int], cs: List[int]) -> int:
        gsa, csa = 0, 0
        ans, psum =0, 0
        for i in range(len(cs)):
            gsa+=gs[i]
            csa+=cs[i]
            psum+= (gs[i]-cs[i])
            if psum<0:
                psum=0
                ans = i+1
        if csa>gsa:
            return -1
        return ans