const binarySearch = (arr: number[], target: number): number => {
  let leftIdx = 0;
  let rightIdx = arr.length - 1;

  while (leftIdx <= rightIdx) {
    let midIdx = Math.floor((leftIdx + rightIdx) / 2);

    if (target === arr[midIdx]) {
      return midIdx;
    } else if (target > arr[midIdx]) {
      leftIdx = midIdx + 1;
    } else {
      rightIdx = midIdx - 1;
    }
  }

  return -1;
};

const sortedArray: number[] = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19];
let output = binarySearch(sortedArray, 13);
console.log(output);
