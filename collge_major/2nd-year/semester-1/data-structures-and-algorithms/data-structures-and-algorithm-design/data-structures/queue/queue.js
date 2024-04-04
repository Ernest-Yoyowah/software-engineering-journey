class Queue {
  constructor() {
    this.queue = [];
  }

  enqueue(element) {
    // add element
    return this.queue.push(element);
  }

  dequeue() {
    if (this.queue.length > 0) {
      return this.queue.shift(); // remove first element
    }
  }

  peek() {
    return this.queue[0];
  }

  size() {
    return this.queue.length;
  }

  isEmpty() {
    return this.queue.length == 0;
  }

  clear() {
    this.queue = [];
  }
}

let counter = new Queue();

// add
counter.enqueue(1);
counter.enqueue(2);
counter.enqueue(3);
counter.enqueue(4);
counter.enqueue(5);

// queue
console.log(`Queue: [${counter.queue}]`);

// get last element
console.log(`Peek: ${counter.peek()}`); // 3

// remove
counter.dequeue(); // 1
counter.dequeue(); // 2

console.log(`After Dequeuing the 1st and 2nd element`);
console.log(`Queue: [${counter.queue}]`);

console.log(`is Empty: ${counter.isEmpty()}`); // false
console.log(`Size: ${counter.size()}`); // 1

// counter.clear();
// console.log(counter.size()); // 0

/*
 - Complexity of queue operations
 - We are always going to access the first queue element and add new elements at the end of the queue. To do this, we will use:

 - for enqueue – O(1)
 - for dequeue – O(1)


********/
