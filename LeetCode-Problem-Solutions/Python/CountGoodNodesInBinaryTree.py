# https://leetcode.com/problems/count-good-nodes-in-binary-tree/

# approach 1 breadt-first-search
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        if not root :return 0
        
        q=deque([[root,root.val]])
        cnt=0
        while q:
            n=len(q)
            
            for i in range(n):
                ele,par=q.pop()
                if ele.val >= par : #par will maintain max value in the current path 
                    cnt+=1
                if ele.left:
                    q.appendleft([ele.left,max(par,ele.left.val)]) #max among maximum value till now and the element that's gonna be pushed in q
                if ele.right:
                    q.appendleft([ele.right,max(par,ele.right.val)])
        return cnt


# approach 2 depth first search
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        if not root :return 0
        self.count=0
        
        def f(root,par):
            if root:
                if root.val >= par :
                    self.count+=1
                if root.left:
                    f(root.left,max(root.left.val,par))
                if root.right:
                    f(root.right,max(root.right.val,par))
        f(root,root.val)
        return self.count