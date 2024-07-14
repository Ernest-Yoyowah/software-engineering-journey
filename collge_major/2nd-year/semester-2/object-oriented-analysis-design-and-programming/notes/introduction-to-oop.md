# Object-Oriented Programming (OOP)

## Introduction

Object-Oriented Programming (OOP) is a programming paradigm centered around objects and classes. It aims to increase the modularity, flexibility, and maintainability of code by organizing it into reusable and interrelated objects.

## Key Concepts

### 1. Classes and Objects

- **Class**: A blueprint for creating objects. It defines a datatype by bundling data and methods that work on the data into one single unit.
- **Object**: An instance of a class. When a class is defined, no memory is allocated until an object of that class is created.

### 2. Encapsulation

Encapsulation is the mechanism of hiding the internal state of an object and requiring all interaction to be performed through an object's methods. This helps to protect the integrity of the data and prevents external entities from altering the internal state in unexpected ways.

### 3. Inheritance

Inheritance allows a new class to inherit the properties and methods of an existing class. This promotes code reuse and establishes a natural hierarchy between classes.

### 4. Polymorphism

Polymorphism allows objects of different classes to be treated as objects of a common superclass. It is typically used to allow one interface to be used for a general class of actions.

### 5. Abstraction

Abstraction means hiding the complex implementation details and showing only the essential features of the object. It reduces complexity by allowing the user to interact with the object at a high level.

## Principles of OOP

### 1. Single Responsibility Principle (SRP)

A class should have only one reason to change, meaning it should have only one job or responsibility.

### 2. Open/Closed Principle (OCP)

Software entities should be open for extension but closed for modification. This means you should be able to add new functionality without changing existing code.

### 3. Liskov Substitution Principle (LSP)

Objects of a superclass should be replaceable with objects of a subclass without affecting the correctness of the program.

### 4. Interface Segregation Principle (ISP)

No client should be forced to depend on methods it does not use. This principle aims at creating more specific interfaces rather than one general-purpose interface.

### 5. Dependency Inversion Principle (DIP)

High-level modules should not depend on low-level modules. Both should depend on abstractions. Abstractions should not depend on details. Details should depend on abstractions.

# Object-Oriented Design (OOD)

## Introduction

Object-Oriented Design (OOD) is the process of planning a system of interacting objects for the purpose of solving a software problem. It involves defining the objects, their types, the messages they can send or receive, and their relationships with each other.

## Steps in OOD

### 1. Identify the Classes

Identify the main objects or classes from the problem domain. This step involves analyzing the requirements and deciding which entities in the problem domain need to be represented as classes.

### 2. Define the Relationships

Establish the relationships between classes. This involves determining how classes will interact with each other, such as inheritance, association, and aggregation.

### 3. Design Class Hierarchies

Organize classes into hierarchies based on inheritance. Ensure that subclasses inherit the properties and methods of their superclasses, promoting code reuse and logical structure.

### 4. Design Interfaces

Define clear interfaces for each class. This includes specifying the methods each class will have and ensuring that the interfaces adhere to the principles of OOP, such as abstraction and encapsulation.

## Best Practices in OOD

### 1. Cohesion

Ensure that a class represents a single concept and all its methods and properties are closely related. High cohesion within classes makes the system more understandable and maintainable.

### 2. Coupling

Minimize dependencies between classes to reduce the impact of changes. Loose coupling between classes ensures that changes in one class do not adversely affect other classes.

### 3. Design Patterns

Use design patterns to solve common design problems. Design patterns provide proven solutions and can help in designing robust and scalable object-oriented systems.

# Summary

Object-Oriented Programming (OOP) and Object-Oriented Design (OOD) are fundamental to modern software development. OOP provides a framework for creating modular and reusable code through concepts like encapsulation, inheritance, polymorphism, and abstraction. OOD takes these concepts further, guiding the process of designing a system of interacting objects to solve a specific problem. Together, OOP and OOD principles help in building maintainable, flexible, and scalable software systems.

# Encapsulation vs Abstraction

## Encapsulation

### Definition

Encapsulation is a fundamental concept in object-oriented programming that involves bundling the data (attributes) and the methods (functions) that operate on the data into a single unit, known as a class. It restricts direct access to some of an object's components, which can prevent the accidental modification of data.

### Key Points

- **Data Hiding**: Encapsulation hides the internal state of the object and only exposes a controlled interface. This helps in protecting the integrity of the object's data.
- **Access Modifiers**: Encapsulation is typically implemented using access modifiers (e.g., private, protected, and public). These modifiers control the visibility of class members.
- **Improves Maintainability**: By limiting access to certain parts of an object, encapsulation makes it easier to change the implementation of an object without affecting other parts of the program.

### Example

```java
public class Employee {
    private String name;
    private double salary;

    public Employee(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        if(salary > 0) {
            this.salary = salary;
        }
    }
}
```

# Abstraction

## Definition

Abstraction is a concept in object-oriented programming that involves hiding the complex implementation details and showing only the essential features of an object. This allows programmers to focus on interactions at a higher level, without worrying about internal complexities.

## Key Points

- **Simplifies Complexity**: Abstraction reduces complexity by providing a simplified model of the system. It hides the intricate details and exposes only the relevant parts.
- **Interfaces and Abstract Classes**: Abstraction is often implemented using interfaces and abstract classes. These define methods that must be implemented by subclasses, without specifying how the methods should be implemented.
- **Enhances Flexibility**: By focusing on what an object does rather than how it does it, abstraction allows for greater flexibility and easier modification of the underlying implementation.

## Example

```java
public abstract class Shape {
    private String color;

    public Shape(String color) {
        this.color = color;
    }

    public String getColor() {
        return color;
    }

    public abstract double area();
}

public class Circle extends Shape {
    private double radius;

    public Circle(String color, double radius) {
        super(color);
        this.radius = radius;
    }

    @Override
    public double area() {
        return Math.PI * Math.pow(radius, 2);
    }
}
```
