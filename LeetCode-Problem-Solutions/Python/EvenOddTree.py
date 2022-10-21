# https://leetcode.com/problems/even-odd-tree/

class Solution:
    def isEvenOddTree(self, root: Optional[TreeNode]) -> bool:
        iseven=True
        q=deque([root,None])
        prev=0
        while len(q)>1:
            ele=q.popleft()
            
            if ele :
                if iseven :
                    if ele.val > prev and ele.val%2:
                        prev=ele.val
                    else:
                        return 0

                else:
                    if ele.val < prev and  not ele.val%2:
                        prev=ele.val
                    else:
                        return 0
                if ele.left:
                    q.append(ele.left)
                if ele.right:
                    q.append(ele.right)
            else:
                iseven=not iseven
                if iseven:
                    prev=0
                else:
                    prev=10**7
                q.append(ele)
        return 1