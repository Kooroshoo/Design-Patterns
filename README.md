# Common programming design patterns.

## Creational Patterns:
Creational patterns deal with object creation mechanisms, trying to create objects in a manner suitable to the situation. They abstract the instantiation process and make the system independent of how its objects are created, composed, and represented.

- **Singleton Pattern**: Ensures that a class has only one instance and provides a global point of access to that instance.
  
  ![image](https://github.com/Kooroshoo/Design-Patterns/assets/26629624/ce344f35-22dd-4566-a0a9-5b87b3417807)


- Factory Method Pattern: Defines an interface for creating an object, but allows subclasses to alter the type of objects that will be created.

  ![image](https://github.com/Kooroshoo/Design-Patterns/assets/26629624/bb8357b1-e2a6-487c-b808-041f0072e0c9)


- Abstract Factory Pattern: Provides an interface for creating families of related or dependent objects without specifying their concrete classes.

- Builder Pattern: Separates the construction of a complex object from its representation, allowing the same construction process to create different representations.

- Prototype Pattern: Creates new objects by copying an existing object, known as the prototype, instead of creating new instances.
  

## Structural Patterns:
Structural patterns deal with object composition or, in simpler terms, with how classes and objects are composed to form larger structures.

- Adapter Pattern: Allows the interface of an existing class to be used as another interface, enabling classes to work together that couldn't otherwise due to incompatible interfaces.

- Composite Pattern: Composes objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly.

- Decorator Pattern: Attaches additional responsibilities to an object dynamically, providing a flexible alternative to subclassing for extending functionality.

- Proxy Pattern: Provides a surrogate or placeholder for another object to control access to it.
  

## Behavioral Patterns:
Behavioral patterns focus on communication between objects, how they collaborate, and how responsibilities are divided between them.

- Observer Pattern: Defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.

- Strategy Pattern: Defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

- **Command Pattern:** Encapsulates a request as an object, thereby allowing for parameterization of clients with queues, requests, and operations.

![command pattern](https://github.com/Kooroshoo/Design-Patterns/assets/26629624/abdb7e73-3b29-4fd8-ab88-5a4780cdbd54)

    **Use Cases:**
  
      1. Objects used as callbacks
  
      2. Can 'store' or 'enqueue' commands.
  
      3. Used for Undo/Redo systems
    
- State Pattern: Allows an object to alter its behavior when its internal state changes. The object will appear to change its class.

- Memento Pattern: Captures and externalizes an object's internal state so that the object can be restored to this state later without violating encapsulation.

- Template Method Pattern: Defines the skeleton of an algorithm in the superclass but lets subclasses override specific steps of the algorithm without changing its structure.





