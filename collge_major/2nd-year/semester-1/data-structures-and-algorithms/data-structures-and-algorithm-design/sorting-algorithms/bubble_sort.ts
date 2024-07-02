const bubbleSort = <T>(arr: T[]): T[] => {
  const len = arr.length;
  let swapped: Boolean;

  do {
    swapped = false;
    for (let i = 0; i < len - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        [arr[i], arr[i + 1]] = [arr[i + 1], arr[i]];
        swapped = true;
      }
    }
  } while (swapped);

  return arr;
};

// Example usage:
const unsortedArray = [5, 3, 8, 1, 2];
console.log(`Unsorted Array: ${unsortedArray}`); // Output: [5, 3, 8, 1, 2]
const sortedArray = bubbleSort(unsortedArray);
console.log("Sorted Array:", sortedArray); // Output: [1, 2, 3, 5, 8]

// Big O - O(n^2): Indicating that its runtime grows quadratically with the size of the input array (`n`).
