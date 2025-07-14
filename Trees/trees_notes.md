starting point ==> root
the points beneath those==> children
the ones without any children ==> leaf node
their parents ==> ancestors


types of binary trees

1. Full Binary trees ==> either has 0 or 2 children (1 children ==> not allowed )
2. Complete Binary Tree ==> all levels are completely filled except the last level && the last level has all nodes in left as possible.
3. Perfect Binary Tree ==> All leaf nodes are at the same level.
4. Balanced Binary Tree ==> height of the tree should be at max log(N).
5. Degenerate Tree ==> Every Node has a single children (Example--> Linked Lists)

Traversal Techniques(BFS/DFS):

DFS:
Inorder Traversal: left root right
Preorder Traversal : root left right
Postorder Traversal : left right root

BFS:
it goes levelwise
