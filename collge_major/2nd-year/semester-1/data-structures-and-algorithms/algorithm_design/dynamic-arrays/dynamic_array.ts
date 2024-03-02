const nums: number[] = [];

// WRITE/UPDATE - O(1)

nums[0] = 1;
nums[1] = 2;
nums[2] = 3;
nums[3] = 4;
nums[4] = 5;

// O(1)
nums.push(6);
nums.push(7);

// O(n)
nums.unshift(0);

console.log(nums);

// DELETE - O(n)
nums.splice(5, 1);

console.log(nums);
