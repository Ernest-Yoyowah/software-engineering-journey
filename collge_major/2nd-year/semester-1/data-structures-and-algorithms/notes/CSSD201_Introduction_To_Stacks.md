# Note on Stacks

## Introduction to Stacks

- A stack is a linear data structure that follows the Last In, First Out (LIFO) principle.
- It consists of a collection of elements with two main operations: push and pop.
- Elements are added and removed from only one end, traditionally known as the top of the stack.

## Operations on Stacks

### 1. Push Operation

- The push operation adds an element to the top of the stack.
- It increases the size of the stack by one.
- Syntax: `push(element)`

### 2. Pop Operation

- The pop operation removes the top element from the stack.
- It decreases the size of the stack by one.
- Syntax: `pop()`

### 3. Peek Operation

- The peek operation returns the top element of the stack without removing it.
- It does not modify the stack.
- Syntax: `peek()`

### 4. IsEmpty Operation

- The isEmpty operation checks if the stack is empty.
- It returns true if the stack is empty, otherwise false.
- Syntax: `isEmpty()`

## Implementation of Stacks

- Stacks can be implemented using various data structures such as arrays or linked lists.
- Arrays are commonly used for stack implementation due to their simplicity and efficiency.
- Linked lists can also be used, offering dynamic memory allocation but with slightly more overhead.

## Applications of Stacks

- Stacks are widely used in programming and computer science for various applications, including:
  - Expression evaluation and syntax parsing
  - Function call and recursion management (function call stack)
  - Undo mechanisms in text editors and software
  - Backtracking algorithms
  - Memory management (call stack in programming languages)

## Stack Variants

### 1. Array-based Stack

- Implemented using arrays to store elements.
- Supports dynamic resizing for flexibility.
- Efficient for small to medium-sized stacks.

### 2. Linked List-based Stack

- Implemented using linked lists to store elements.
- Offers dynamic memory allocation and flexibility.
- Suitable for larger stacks or when memory allocation is a concern.

### 3. LIFO Queue (Deque)

- A variant of the stack that supports both stack and queue operations.
- Elements are added and removed according to the LIFO principle.
- Provides push, pop, peek, enqueue, and dequeue operations.

## Time Complexity of Stack Operations

- The time complexity of stack operations varies depending on the implementation:
  - Push and pop operations: O(1) for both array-based and linked list-based stacks.
  - Peek operation: O(1) for both implementations.
  - IsEmpty operation: O(1) for both implementations.

## Conclusion

- Stacks are fundamental data structures used in various applications.
- They provide efficient operations for managing data according to the Last In, First Out (LIFO) principle.
- Understanding stack operations and implementations is essential for solving problems in computer science and software development.
