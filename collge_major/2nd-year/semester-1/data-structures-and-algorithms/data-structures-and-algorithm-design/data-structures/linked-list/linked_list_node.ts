class LinkedListNode<T> {
  val: T;
  next: LinkedListNode<T> | null;
  pre: LinkedListNode<T> | null;

  constructor(val: T) {
    this.val = val;
    this.next = null;
    this.pre = null;
  }
}

export default LinkedListNode;
