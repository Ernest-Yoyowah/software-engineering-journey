# CSSD205 Logic Lecture 4 Notes

## 1. Logic Gates

### Definition:

Logic gates are fundamental building blocks in digital circuit design. They perform logical operations on binary inputs (0 and 1) to produce binary outputs. The basic logic gates include AND, OR, NOT, NAND, NOR, XOR, and XNOR.

### Types of Logic Gates:

1. **AND Gate:**

   - The AND gate outputs 1 only if both inputs are 1; otherwise, it outputs 0.

2. **OR Gate:**

   - The OR gate outputs 1 if at least one input is 1; it outputs 0 only if both inputs are 0.

3. **NOT Gate:**

   - The NOT gate (inverter) outputs the opposite of its input.

4. **NAND Gate:**

   - The NAND gate is the negation of the AND gate. It outputs 0 only if both inputs are 1.

5. **NOR Gate:**

   - The NOR gate is the negation of the OR gate. It outputs 1 only if both inputs are 0.

6. **XOR Gate:**

   - The XOR gate (exclusive OR) outputs 0 if both inputs are same, otherwise outputs 1.

## 2. Boolean Algebra

### Definition:

Boolean algebra is a mathematical structure that deals with binary variables and logical operations. It is a formal system for manipulating logical expressions using the operators AND, OR, and NOT.

### Laws of Boolean Algebra:

1. **Idempotent Law:**

   - A OR A = A
   - A AND A = A

2. **Commutative Law:**

   - A OR B = B OR A
   - A AND B = B AND A

3. **Associative Law:**

   - (A OR B) OR C = A OR (B OR C)
   - (A AND B) AND C = A AND (B AND C)

4. **Distributive Law:**

   - A AND (B OR C) = (A AND B) OR (A AND C)
   - A OR (B AND C) = (A OR B) AND (A OR C)

5. **De Morgan's Laws:**
   - NOT (A AND B) = (NOT A) OR (NOT B)
   - NOT (A OR B) = (NOT A) AND (NOT B)

## 3. Truth Table

### Definition:

A truth table is a table that shows all possible combinations of input values and the corresponding output values for a given logical expression or circuit.

### Example:

![Truth Table Example](https://mcsphilsoc.files.wordpress.com/2012/11/truth-table.png?w=640)

## 4. Connectives

### Definition:

Connectives are symbols or words used to combine or modify logical propositions. They include operators such as NOT, AND, OR, IF (implication), and IFF (bi-conditional).

### Types of Connectives:

1. **NOT (Negation):**

   - Represents the opposite or negation of a proposition.
   - Example: NOT P

2. **AND (Conjunction):**

   - Represents the logical AND operation between two propositions.
   - Example: P AND Q

3. **OR (Disjunction):**

   - Represents the logical OR operation between two propositions.
   - Example: P OR Q

4. **IF (Implication):**

   - Represents the conditional "if... then..." relationship between two propositions.
   - Example: P IF Q

5. **IFF (Bi-conditional):**
   - Represents the logical equivalence between two propositions.
   - Example: P IFF Q

## 5. Further Explanations of the Connectives

### 5.1 Implication (IF):

- The implication "P IF Q" is false only when P is true and Q is false; otherwise, it is true.
- It expresses a conditional relationship where the truth of P guarantees the truth of Q.

### 5.2 Bi-conditional (IFF):

- The bi-conditional "P IFF Q" is true when both P and Q have the same truth value (both true or both false).
- It represents logical equivalence, stating that P and Q are either both true or both false.

### 5.3 Additional Notes:

- Connectives are crucial in constructing logical expressions and statements.
- They enable the formulation of complex logical structures based on simpler propositions.
- Logical connectives are widely used in computer science, mathematics, and artificial intelligence.
