#Simple node structure

class Node:
    #Creating a node with a value and optional link to other node
    #The prev node is an update for the doublylinkedlists
    def __init__(self, value, next_node = None, prev_node=None):
        self.value = value
        self.next_node = next_node
        self.prev_node = prev_node

    #Method to set the link node 
    def set_next_node(self, next_node):
        self.next_node = next_node
    
    #Method to get the next node
    def get_next_node(self):
        return self.next_node
    
    def set_prev_node(self, prev_node):
        self.prev_node = prev_node

    def get_prev_node(self):
        return self.prev_node
    
    #Method to get the value of the node
    def get_value(self):
        return self.value