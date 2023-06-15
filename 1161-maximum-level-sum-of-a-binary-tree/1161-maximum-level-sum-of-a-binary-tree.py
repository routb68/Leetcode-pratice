# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    from collections import deque
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        q = deque()
        q.append(root)
        q.append(None)
        ans = []
        res = 0
        idx = 0
        while(len(q)>1):
            temp = q.popleft()
            if(temp==None):
                idx+=1
                ans.append([res,idx])
                res=0
                q.append(None)
                continue
            res+=temp.val
            if(temp.left!=None):
                q.append(temp.left)
            if(temp.right!=None):
                q.append(temp.right)
        ans.append([res,idx+1])
        ans.sort()
        sol = []
        for i in range(len(ans)):
            if(ans[i][0]==ans[len(ans)-1][0]):
                sol.append(ans[i][1])
            
        sol.sort()
        return sol[0]