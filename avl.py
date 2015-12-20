class Node():
    def __init__(self, value):
        self.left = None
        self.right = None
        self.key = value

class AVL:
    def __init__(self, nodeIn):
        self.node = nodeIn
        self.height = -1

    def fill_AVL(self, Array, Astart, Aend):
        if Aend < Astart:
            return AVL(None)
        else:
            mid = (Aend + Astart) / 2 
            self.node = Node(array[mid])
            self.node.left = AVL(None)
            self.node.right = AVL(None)
        
        self.node.left.fill_AVL(Array, Astart, mid-1) 
        self.node.right.fill_AVL(Array, mid+1, Aend)

    def update_heights(self):
        """
        Update tree height
 
        Tree height is max height of either left or right subtrees +1 for root of the tree
        """
        #print self.node.left
        if self.node:
            if self.node.left: 
                self.node.left.update_heights()
            if self.node.right:
                self.node.right.update_heights()
            
            self.height = 1 + max(self.node.left.height, self.node.right.height)
        else: 
            self.height = -1

    def compress2Array(self):
            """
            Inorder traversal of the tree
                Left subree + root + Right subtree
            """
            result = []

            if not self.node:
                return result
            
            result.extend(self.node.left.compress2Array())
            result.append(self.node.key)
            result.extend(self.node.right.compress2Array())
     
            return result


if __name__ == "__main__":
    array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    tree = AVL(None)
    tree.fill_AVL(array, 0, len(array)-1)
    tree.update_heights()
    print tree.compress2Array()


