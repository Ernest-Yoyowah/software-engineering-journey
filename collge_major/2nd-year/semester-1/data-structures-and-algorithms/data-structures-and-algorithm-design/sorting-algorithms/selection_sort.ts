const selectionSort = <T>(arr: T[]): T[] => {
  let len = arr.length;

  for (let i = 0; i < len - 1; i++) {
    let minIndex = i;
    for (let j = i + 1; j < len; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    if (minIndex !== i) {
      [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]]; // Swap elements
    }
  }

  return arr;
};

// Example usage:
const unsortedArray = [5, 3, 8, 1, 2];
console.log("Unsorted Array:", unsortedArray);
const sortedArray = selectionSort(unsortedArray);
console.log("Sorted Array:", sortedArray);
