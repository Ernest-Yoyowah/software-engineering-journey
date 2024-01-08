# Introduction to Data Structures and Algorithms

## Outline

1. **Data Types**
2. **Data Structures**
3. **Abstract Data Types**
4. **Algorithms**
   - **Algorithms Analysis**
   - **Time Analysis**
   - **How to Compare Algorithms**
   - **Rate of Growth**
   - **Analysis Types**
   - **Asymptotic Notation**
   - **Guidelines for Asymptotic Analysis**

## What is Data Type?

A **data type** is a set of data with predefined values, such as integers, floating points, characters, strings, etc.

Two main types of data types:

- **System-defined data types (Primitive data types):** e.g., `int`, `float`, `char`, `double`, `bool`
- **User-defined data types:** like structures in C/C++ and classes in Java.

## What is Data Structure?

A **data structure** is a representation of data and the operations allowed on that data. It is a way to store and organize data to facilitate access and modifications. Data structures are methods of representing logical relationships between individual data elements for solving specific problems.

## Basic Data Structure

### Linear Data Structures

- **Arrays**
- **Linked Lists**
- **Stacks**
- **Queues**

### Non-Linear Data Structures

- **Trees**
- **Graphs**
- **Hash Tables**

## Selection of Data Structure

### The choice of a particular data model depends on two considerations:

1. It must be rich enough in structure to represent the relationship between data elements.
2. The structure should be simple enough that one can effectively process the data when necessary.

## Types of Data Structure

**Linear:** In Linear data structures, values are arranged in a linear fashion.

- **Array:** Fixed-size
- **Linked-list:** Variable-size
- **Stack:** Add to the top and remove from the top
- **Queue:** Add to the back and remove from the front
- **Priority queue:** Add anywhere, remove the highest priority

## Non-Linear Data Structures

**Non-Linear:** The data values in this structure are not arranged in order.

- **Hash Tables:** Unordered lists that use a ‘hash function’ to insert and search for elements efficiently.

- **Tree:** Data is organized in branches, with a hierarchical structure. Nodes have a parent-child relationship.

- **Graph:** A more general branching structure, where nodes (vertices) can have connections (edges) to other nodes. It is less strict than a tree in terms of connection conditions.

## Homogeneous and Non-Homogeneous Data Structures

**Homogeneous:** In this type of data structures, values of the same types of data are stored.
Example: **Array**

**Non-Homogeneous:** In this type of data structures, data values of different types are grouped and stored.
Examples: **Structures, Classes**
