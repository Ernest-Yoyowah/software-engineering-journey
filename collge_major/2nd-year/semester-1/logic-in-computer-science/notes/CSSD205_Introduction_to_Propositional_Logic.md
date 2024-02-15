# CSSD205 Introduction to Propositional Logic

## Propositional Logic

### What is Logic?

Logic is the systematic study of the principles of reasoning. In the context of computer science, logic plays a crucial role in constructing valid arguments, proving or disproving mathematical statements, and ensuring precision in computational processes.

### Basic Logic Functions

The fundamental rules of logic help us think about mathematical statements and provide a framework for proving or disproving them with precision. These rules are essential for constructing logically sound arguments.

### Purpose of Logic

The primary purpose of logic is to construct valid arguments, commonly known as proofs. If an argument is valid, it is considered a theorem. Logic provides the tools and rules needed to reason about mathematical statements rigorously.

## Propositional Logic

### What is Propositional Logic?

Propositional logic deals with propositions, which are declarative sentences that can be either true or false but not both simultaneously. Examples of propositions include:

- "Accra is the Capital of Ghana."
- "It's raining in Tesano."

Propositions provide a way to express and reason about the truth values of statements.

### Example Propositions

1. **Accra is the Capital of Ghana:** This is a declarative sentence that can be either true or false.

2. **It's raining in Tesano:** Similar to the first example, this proposition can be true or false.

Propositional logic allows us to analyze and manipulate these propositions to draw logical conclusions.

### Logical Connectives

Logical connectives are used to combine or modify propositions. The basic logical connectives include:

- **Conjunction (AND):** Represents the logical "and" operation. For example, "P AND Q" is true only when both P and Q are true.

- **Disjunction (OR):** Represents the logical "or" operation. "P OR Q" is true when at least one of P or Q is true.

- **Negation (NOT):** Represents the logical "not" operation. "NOT P" is true when P is false.

### Truth Tables

Truth tables are used to represent the possible truth values of compound propositions based on the truth values of their individual components.

### Implication

- **Conditional Statements:** Represented as "P implies Q," it asserts that if P is true, then Q must also be true.

- **Bi-conditional Statements:** Represented as "P if and only if Q," it states that P is true if and only if Q is true.

### Tautologies and Contradictions

- **Tautology:** A compound proposition that is always true, regardless of the truth values of its components.

- **Contradiction:** A compound proposition that is always false.

### Understanding Tautology and Contradiction

In logic, a **tautology** is a formula that is always true, regardless of the truth values assigned to its components. It can be seen as a rule of logic that holds true under all circumstances.

On the other hand, a **contradiction** is a formula that is always false, regardless of the truth values assigned to its components. It represents a situation where no assignment of truth values can make the formula true.

## Examples:

### Tautology: (p ∨ ¬p)

The formula (p ∨ ¬p) represents the logical operation "p or not p." Regardless of whether p is true or false, the entire expression will always be true. This is because if p is true, then (p ∨ ¬p) is true because one of its components (p) is true. If p is false, then (¬p) is true, so (p ∨ ¬p) is still true because one of its components (¬p) is true. Therefore, (p ∨ ¬p) is always true, making it a tautology.

### Contradiction: (p ∧ ¬p)

The formula (p ∧ ¬p) represents the logical operation "p and not p." This expression can never be true because it asserts both p and its negation ¬p simultaneously. Since p and ¬p cannot both be true at the same time, the entire expression (p ∧ ¬p) is always false, regardless of the truth value of p. Therefore, (p ∧ ¬p) is a contradiction.

In summary, (p ∨ ¬p) is always true, representing a tautology, while (p ∧ ¬p) is always false, representing a contradiction.

These notes provide an overview of Propositional Logic, introducing logical connectives, truth tables, implication, and key concepts in understanding and manipulating propositions.

## Translate the following propositions;

### Example 1:

If I write an exam and I cheat then I will get caught and I will fail.

solution:

- Let P = I write an exam
- q = I cheat
- k = I will get caught
- f = I will fail
- Hence, (p ∧q) ⇒ (k ∧f)

### Example 2:

If James does not die then Mary will not get any money and James family will be happy.
Solution:

- Let p = James die
- ¬ p = James does not die
- q = Mary will get money
- ¬ q = Mary will not get any money
- k = James family will be happy
- Therefore: ¬ p ⇒ (¬q ∧k)

### Try Work:

Translate the following sentences given the following statements.

- My shirt is gray and my shorts are not.
- I am not wealthy but I like quality things. If I go to the mall then I will buy shoes.
- If Harry comes to work today then I will borrow his bag and I will take it to the program.
