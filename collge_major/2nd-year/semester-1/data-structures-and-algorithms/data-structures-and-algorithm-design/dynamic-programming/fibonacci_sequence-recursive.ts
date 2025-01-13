const fibonacciSequenceRecursive = (n: number): number => {
  if (n <= 2) return 1;

  return fibonacciSequenceRecursive(n - 1) + fibonacciSequenceRecursive(n - 2);
};

console.log(fibonacciSequenceRecursive(5));
