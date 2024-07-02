const insertionSort = <T>(ar: T[]): T[] => {
  for (let i = 1; i < ar.length; i++) {
    let numberToInsert = ar[i];
    let j = i - 1;

    while (j >= 0 && ar[j] > numberToInsert) {
      ar[j + 1] = ar[j];
      j = j - 1;
    }
    ar[j + 1] = numberToInsert;
  }
  return ar;
};

// Example usage:
const array = [-6, 20, 8, -2, 4];
console.log(`Unsorted Array:  ${array}`); // Output: [-6, 20, 8, -2, 4]
const sorted = insertionSort(array);
console.log("Sorted Array:", sorted); // Output: [-6, -2, 4, 8, 20]

// Big O - O(n^2): Indicating that its runtime grows quadratically with the size of the input array (`n`).
