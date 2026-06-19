class TreeNode:
    """"Represents a single node inside the tree"""
    def __init__(self, key) -> None:
        self.left = None
        self.right = None
        self.parent = None
        self.key = key
        self.value = value

    def __repr__(self) -> str:
        return  f"Node({self.key},{self.value})"

class BinarySearchTree:
    def __init__(self) -> None:
        self.root = None #The tree starts empty

    def __contains__(self, key):
        pass
    







































    
    def __iter__(self):
        pass
    
    def __repr__(self):
        pass
    
    def insert(self, key, value):
        pass

    def search(self, key):
        current_node = self.root

        while True:
            if current_node is None or current_node.key == key:
                return current_node
            elif key < current_node.key:
                if 























    # ----------------------------------------------------------------
    # Insertion
    # ----------------------------------------------------------------

    #Insert
    def insert(self, key, value):
        """Inserts the value into the tree"""
        if self.root is None:
            self.root = TreeNode(value)
        else:
            self._insert_recursive(self.root, value)
    
    #Recursive insert
    def _recursive_insert(self, current_node, value):
        """Traverses the tree to find the correct position"""
        if value < current_node.value:
            # Goes to theleft
            if current_node.left is None:
                current_node.left = TreeNode(value)
            else:
                self._recursive_insert(current_node.left, value)
        elif value > current_node.value:
            # Goes to the right
            if current_node.right is None:
                current_node.rigt = TreeNode(value)
            else:
                self._recursive_insert(current_node.right, value)
        # If value == current_node.vlaue, we ignore duplicates

    # ----------------------------------------------------------------
    # Search
    # ----------------------------------------------------------------

    def search(self, value):
        """
        Searches for a value in the tree.
        Returns True if found, False otherwise.
        """

        return self._search_recursive(self.root, value)

    def _search_recursive(self, current_node, value):
        if current_node is None:
            return False
        if value == current_node.value: 
            return True
        elif value < current_node.value:
            return self._search_recursive(current_node.left, value)
        else:
            return self._search_recursive(current_node.right, value)
    
