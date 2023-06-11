# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    from collections import deque
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        res = []
        ans = []
        if(root==None):
            return res
        q = deque()
        q.append(root)
        q.append(None)
        while(len(q)>1):
            temp = q.popleft()
            if(temp==None):
                # print()
                q.append(None)
                # print(ans)
                res.append(ans)
                # print(res)
                ans = []
                continue
            ans.append(temp.val)
            # print(ans)
            if(temp.left!=None):
                q.append(temp.left)
            if(temp.right!=None):
                q.append(temp.right)
        if(len(ans)):
            # print(ans)
            res.append(ans)
            # print(res)
        res.reverse()
        return res