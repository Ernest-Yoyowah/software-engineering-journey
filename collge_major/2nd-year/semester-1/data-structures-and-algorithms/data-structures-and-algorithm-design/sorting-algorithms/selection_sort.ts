const selectionSort = <T>(arr: T[]): T[] => {
  let len = arr.length;

  for (let i = 0; i < len - 1; i++) {
    let minIdx = i;

    for (let j = i + 1; j < len; j++) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    if (minIdx !== i) {
      [arr[i], arr[minIdx]] = [arr[minIdx], arr[i]];
    }
  }

  return arr;
};

// Example usage:
const unsortedArray = [5, 3, 8, 1, 2];
console.log(`Unsorted Array: ${unsortedArray}`);
const sortedArray = selectionSort(unsortedArray);
console.log(`Sorted Array: ${sortedArray}`);
// Big O - O(n^2): Indicating that its runtime grows quadratically with the size of the input array (`n`).
