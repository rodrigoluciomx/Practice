from linked_list import Node, LinkedList
from blossom_lib import flower_definitions
from hash_map import HashMap

blossom = HashMap(len(flower_definitions))
for flower in flower_definitions:
  blossom.assign(flower[0], flower[1])

print(blossom.retrieve('daisy'))