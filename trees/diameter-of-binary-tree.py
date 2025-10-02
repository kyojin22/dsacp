# 2 October, 2025
# 
# Trying python
# 
# today I did a bit of research on my bisp project
# and I feel like I chose something very hard
# i dont have no idea about where to start and how to start
# no tutorial or normal docs
# cant seem to find any yet
# 
# and now im startin to struggle with leetcode as well
# 
# i feel like im not improving on anything
# feelin like just goin down
#

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        res = 0

        def dfs(root):
            if not root:
                return 0
            
            l = dfs(root.left)
            r = dfs(root.right)

            nonlocal res
            res = max(res, l + r)
            return 1 + max(l, r)
            
        dfs(root)
        return res
    
