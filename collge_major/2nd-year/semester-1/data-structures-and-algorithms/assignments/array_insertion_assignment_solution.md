# Array Insertion Algorithm

## Star Method

### Situation (S)

Given a static array of size `4` initialized with values, and a task to insert a new value at a specific index.

- **Input:**
  - Array of size `4`.
  - Index `2` where the value should be inserted.
  - New value `18` to be inserted.

### Task (T)

- **Insertion Task:**
  - Insert the new value `18` at index `2`.
  - Push the existing values from index `2` to the next index.

### Action (A)

1. **Check Validity:**

   - If `i` is less than 0 or greater than or equal to `array size`, print "Invalid index."

2. **Shift Elements:**

   - Iterate backward from the end of the array to `i > 2`.
   - For each iteration, set `array[i + 1]` to the current value of `array[i]`.
   - This effectively shifts each element to the next index, creating space for the new value.

3. **Insert New Value:**
   - Insert the new value `18` at index `2`.

### Result (R)

- **Modified Array:**
  - The array will be modified after the insertion, and the new value `18` will be present at the specified index `2`.

-**Initial Output:**

- `[8, 10, 12, 5]`

-**Expected Output:**

- `[8, 10, 18, 12, 5]`
