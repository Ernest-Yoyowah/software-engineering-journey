# Queue Notes

## What is a Queue

- A queue is a linear data structure that follows the First In, First Out (FIFO) principle.
- Elements are added at the rear (enqueue) and removed from the front (dequeue).

## Queue as an ADT

- Abstract Data Type (ADT) definition:
  - Operations:
    - enqueue(item): Adds an item to the rear of the queue.
    - dequeue(): Removes and returns the item at the front of the queue.
    - isEmpty(): Checks if the queue is empty.
    - size(): Returns the number of items in the queue.
  - Properties:
    - FIFO (First In, First Out) behavior.

## Implementation of Queue ADT

- Can be implemented using arrays or linked lists.
- Arrays:
  - Requires fixed size or resizing operations.
  - Circular arrays for efficient memory usage.
- Linked lists:
  - Dynamic memory allocation.
  - No resizing required.

## Queue Exceptions

- Queue underflow: Attempting to dequeue from an empty queue.
- Queue overflow: Attempting to enqueue into a full queue (in array-based implementations).

## Queue Applications

- Task scheduling in operating systems.
- Print job queues in printers.
- Network packet handling.
- Breadth-first search (BFS) algorithm in graph traversal.

## Why Use Queues

- Queues are suitable for scenarios where elements need to be processed in the order they are received.
- They ensure fairness by following the FIFO principle, making them ideal for task scheduling and job processing.
- Queues provide efficient handling of resources, preventing resource contention and maximizing throughput.

## Buffer and Buffering

- A buffer is a temporary storage area used to hold data while it is being transferred from one place to another.
- Buffering is the process of temporarily storing data in a buffer to smooth out the flow of data between two devices or processes that operate at different speeds.
