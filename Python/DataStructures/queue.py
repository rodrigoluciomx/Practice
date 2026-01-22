from node import Node

class Queue:
    def __init__(self, max_size = None):
        self.head = None
        self.tail = None
        self.size = 0
        self.max_size = 0 

    def enqueue(self, value):
        if self.has_space():
            item_to_add = Node(value)
            if self.is_empty():
                self.head = item_to_add
                self.tail = item_to_add
            else:
                self.tail.set_next_node(item_to_add)
                self.tail = item_to_add
            self.size += 1
        else:
            print("Sorry, no more room!")
    
    def dequeue(self):
        if not self.is_empty():
            item_to_remove = self.head
            print(f"Removing:{item_to_remove.get_value} from the queue.")
            if self.get_size() == 1:
                self.head = None
                self.tail = None
                print("Now the queue is empty")
            else: 
                self.head = self.head.get_next_node()
            self.size -= 1
        else:
            print("The queue is totally empty!")


    def peek(self):
        if self.size > 0:
            return self.head.get_value()
        else:
            print("No items in the queue")

    def has_space(self):
        # Check if there is a size limit
        if self.max_size:
            #If True, then it's available space.
            #If False, the there is no space left. 
            return self.max_size > self.size
        else:
            return True
    
    def is_empty(self):
        return self.size == 0