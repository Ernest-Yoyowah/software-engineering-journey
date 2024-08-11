/**
 * A node in the singly linked list.
 */
class ListNode<T> {
  public value: T;
  public next: ListNode<T> | null = null;

  /**
   * Creates a new node with the given value.
   * @param value - The value to store in the node.
   */
  constructor(value: T) {
    this.value = value;
  }
}

/**
 * A singly linked list data structure.
 */
class SinglyLinkedList<T> {
  private head: ListNode<T> | null = null;
  private tail: ListNode<T> | null = null;

  /**
   * Appends a new node with the given value to the end of the list.
   * @param value - The value to add to the list.
   */
  public append(value: T): void {
    const newNode = new ListNode(value);

    if (this.tail) {
      this.tail.next = newNode;
    }
    this.tail = newNode;

    if (!this.head) {
      this.head = newNode;
    }
  }

  /**
   * Displays the elements of the list.
   */
  public display(): void {
    let current = this.head;
    while (current !== null) {
      console.log(current.value);
      current = current.next;
    }
  }

  /**
   * Returns a string representation of the list.
   * @returns A string representing the list.
   */
  public toString(): string {
    let result = "";
    let current = this.head;
    while (current !== null) {
      result += `${current.value}${current.next ? " -> " : ""}`;
      current = current.next;
    }
    return result;
  }

  /**
   * Returns the length of the list.
   * @returns The number of elements in the list.
   */
  public length(): number {
    let count = 0;
    let current = this.head;
    while (current !== null) {
      count++;
      current = current.next;
    }
    return count;
  }
}

// Example usage:
const linkedList = new SinglyLinkedList<number>();
linkedList.append(1);
linkedList.append(2);
linkedList.append(3);
linkedList.display(); // Output: 1, 2, 3
console.log(linkedList.toString()); // Output: 1 -> 2 -> 3
console.log(`Length of the list: ${linkedList.length()}`); // Output: Length of the list: 3
