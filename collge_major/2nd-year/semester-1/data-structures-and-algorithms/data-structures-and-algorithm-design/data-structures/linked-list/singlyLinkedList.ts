class ListNode<T> {
  public value: T;
  public next: ListNode<T> | null;

  constructor(value: T) {
    this.value = value;
    this.next = null;
  }
}

class SinglyLinkedList<T> {
  private head: ListNode<T> | null;
  private tail: ListNode<T> | null;

  constructor() {
    this.head = null;
    this.tail = null;
  }

  // Insert a new node at the end of the list
  append(value: T): void {
    const newNode = new ListNode(value);
    if (!this.head) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      this.tail!.next = newNode;
      this.tail = newNode;
    }
  }

  // Display the elements of the list
  display(): void {
    let current: ListNode<T> | null = this.head;
  }
}

// Example usage:
const linkedList = new SinglyLinkedList<number>();
linkedList.append(1);
linkedList.append(2);
linkedList.append(3);
linkedList.display(); // Output: 1, 2, 3
