# Linked List Addition Algorithm

## 1. Create a Linked List

- Initialize an empty linked list.
- Iterate through the given pointers and data arrays.
  - Create a new node for each pair of pointer and data.
  - Connect the nodes to form a linked list.

## 2. Perform Addition at Tail Node (Cost = O(n))

- Traverse the linked list until the last node.
- Create a new node with the provided pointer and data.
- Link the last node to the new node.

## 3. Optimize Addition at Tail Node (Cost = O(1))

- Create a new node with data (13, 72).
- Link the new node to the current head of the list.
- Update the head of the list to be the new node.

## 4. Algorithm for Optimization (Cost = O(1))

```plaintext
Algorithm addNodeOptimized():
    Input: None
    Output: None

    // Create a new node with data (13, 72)
    newNode = createNode(13, 72)

    // Link the new node to the current head
    newNode.next = head

    // Update the head of the list to be the new node
    head = newNode
```

[Diagram representation of the algorithm](./linked-list_node_addition_and_time_complexity_optimization_assignment_diagram.md)
