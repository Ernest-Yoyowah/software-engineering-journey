# 7 Software Design Concepts from John Ousterhout

## 1. Complexity Defined

Complexity in software design can be broken down into three main elements:

- **Change Amplification**: When a simple change in functionality requires modification across many parts of the codebase.
- **Cognitive Load**: The amount of information a developer needs to understand to complete a task. This often involves making trade-offs based on what a developer can remember or understand about the system.

- **Unknown Unknowns**: This arises when it's not clear what needs to be modified to accomplish a task. There may be something unknown that prevents a task from being completed, but without any indication that something is missing or incorrect.

### Causes of Complexity

1. **Dependencies**: Creates change amplification and increases cognitive load, as changes in one part of the code impact many others.
2. **Obscurity**: When code behavior is hard to understand due to poor naming conventions or lack of documentation, leading to unknown unknowns.

Ousterhout notes that complexity in software is incremental, often growing gradually without clear indicators.

---

## 2. Strategic vs. Tactical Programming

- **Tactical Programming**: A focus on making code "just work" for the immediate need. "Tactical tornadoes" are developers who quickly solve problems but may ultimately harm the project by creating more complexity.
- **Strategic Programming**: Emphasizes well-designed, maintainable code, requiring a long-term investment mindset where quality is valued over immediate functionality.

---

## 3. Deep Interfaces

Deep interfaces are foundational to **modular design**. The goal is to allow developers to interact with a small subset of the system’s complexity at a time, enabling encapsulation and reducing the cognitive load on each developer.

---

## 4. Classitis

"Classitis" refers to the tendency to overuse classes, creating unnecessary levels of hierarchy and abstraction, which adds to the complexity of the system without adding meaningful value.

---

## 5. Information Hiding

This principle, introduced by David Parnas in "On the Criteria to Be Used in Decomposing Systems into Modules," stresses that modules should hide their internal workings from other parts of the system.

> "A design architect who works for Microsoft said that in 6 years of interviewing more than 200 candidates for software-development positions, he had interviewed only 5 who could accurately describe the concepts of 'modularity' and 'information hiding.'" — _Quote from Rapid Development by Steve McConnell_

---

## 6. General vs. Special Purpose Modules

Designing modules for general-purpose use can improve reusability, but it is important to find a balance so that modules are not over-generalized or under-specialized, leading to unnecessary complexity.

---

## 7. Testing

Ousterhout emphasizes the critical role of unit tests:

> "Can't imagine doing software without unit tests."

Good unit tests facilitate refactoring and improve code quality. However, Ousterhout warns that **Test-Driven Development (TDD)** can sometimes overly focus on functionality over design, encouraging developers to "hack" solutions for passing tests rather than designing well-structured code.

- **Testing Abstractions over Features**: Units of development should focus on abstractions, not just on specific features. When fixing bugs, it's appropriate to write a failing test that confirms the bug, then correct it so the test passes.
