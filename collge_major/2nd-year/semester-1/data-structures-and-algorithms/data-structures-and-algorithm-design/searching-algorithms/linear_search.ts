const linearSearch = (arr: number[], target: number): number => {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      return i;
    }
  }
  return -1;
};

const array: number[] = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19];

console.log(linearSearch(array, 5));
