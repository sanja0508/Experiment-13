# Experiment-13

Aim: To understand and implement the concept of constructors (default, parameterized, and copy) and destructors in C++ for different data structures like linked lists, stacks, and queues, in order to manage the lifecycle and initialization of objects.

Software Required: Visual Studio / Code::Blocks / Dev C++ / Turbo C++, C++ Compiler (GCC or MSVC)

Theory: In C++, constructors and destructors play an essential role in managing the lifecycle of objects. A constructor is a special member function that initializes an object when it is created, while a destructor is used to clean up any resources when the object is destroyed.
Constructor Types:
Default Constructor: A constructor with no arguments, which initializes the data members to default values.
Parameterized Constructor: A constructor that accepts parameters to initialize the object with specific values.
Copy Constructor: A constructor that creates a new object as a copy of an existing object.
Destructor: A function automatically called when an object goes out of scope or is explicitly destroyed, used to release resources like dynamically allocated memory.

In this experiment, we will focus on implementing these concepts using common data structures such as Linked List, Stack, and Queue. We'll observe how constructors and destructors interact with objects in different cases.

Concepts Covered:
Linked List: Using constructors and destructors for node creation and memory management.
Stack: Managing dynamic memory with the help of constructors and destructors.
Queue: Demonstrating constructor and destructor usage to handle resource cleanup for queue operations.

Algorithm:

Linked List:
Create a linked list with constructor initialization for nodes.
Use a destructor to clean up allocated memory when the list is no longer in use.

Stack:
Initialize a stack with a constructor and manage memory dynamically.
Use a destructor to free up any dynamically allocated memory when the stack object is destroyed.

Queue:
Initialize a queue with a constructor and dynamically allocate memory for storing elements.
Use a destructor to release memory allocated for the queue when it is destroyed.

Conclusion: In this experiment, we successfully implemented and observed the behavior of constructors and destructors in C++ using common data structures like Linked Lists, Stacks, and Queues. We confirmed that constructors are essential for initializing objects and managing memory, while destructors ensure the proper cleanup of dynamically allocated resources. This experiment reinforces the importance of memory management and object lifecycle control in object-oriented programming.


