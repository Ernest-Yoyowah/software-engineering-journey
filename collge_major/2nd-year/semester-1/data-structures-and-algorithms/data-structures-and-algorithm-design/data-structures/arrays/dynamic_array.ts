class DynamicArray<T> {
  private capacity: number;
  private length: number;
  private data: T;

  constructor(capacity: number = 10) {
    this.capacity = capacity;
    this.length = 0;
    this.data = new Array<T>(capacity);
  }

  // Get the current length of the array
  getLength(): number {
    return this.length;
  }

  // Get an element at a specific index
  getElement(index: number): T | undefined {
    if (index < 0 || index >= this.length) {
      return undefined; // Index out of bounds
    }
    return this.data[index];
  }

  // Insert an element at the end of the array
  push(element: T): void {
    if (this.length === this.capacity) {
      this.resizeArray();
    }
    this.data[this.length++] = element;
  }

  // Remove and return the last element of the array
  pop(): T | undefined {
    if (this.length === 0) {
      return undefined; // Array is empty
    }
    const poppedElement = this.data[--this.length];
    delete this.data[this.length];
    return poppedElement;
  }

  // Private method to resize the array when it reaches capacity
  private resizeArray(): void {
    this.capacity *= 2;
    const newData: T[] = new Array<T>(this.capacity);
    for (let i = 0; i < this.length; i++) {
      newData[i] = this.data[i];
    }
    this.data = newData;
  }
}

// Example usage:
const myArray = new DynamicArray<number>();
myArray.push(1);
myArray.push(2);
myArray.push(3);
console.log("Length:", myArray.getLength()); // Output: 3
console.log("Element at index 1:", myArray.getElement(1)); // Output: 2
console.log("Popped element:", myArray.pop()); // Output: 3
console.log("Length after popping:", myArray.getLength()); // Output: 2
