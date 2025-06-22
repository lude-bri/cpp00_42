# CPP Module 00  
<a name="readme-top"></a>  
<p align="center">  
  <img src="https://capsule-render.vercel.app/api?type=venom&height=200&color=0ABAB5&text=cpp00&fontAlign=50&fontAlignY=61&animation=fadeIn&fontColor=fcf3f2&fontSize=100" />  
</p>  

---

## **About**  
This module introduces fundamental C++ concepts transitioning from C, including **namespaces**, **classes**, **streams**, and **access control**. Developed at 42 Porto, it emphasizes hands-on practice with OOP basics while adhering to the C++98 standard.  

⚠️ **Disclaimer**: This repository contains partial implementations for academic purposes. Some features may be simplified for learning objectives.  

---

## **What is C++?**

C++ is a multi-paradigm systems programming language extending C with:

* Object-Oriented Programming (Classes, inheritance, polymorphism)
* Generic Programming (Templates)
* Low-level memory control (Pointers, manual allocation)
> Key strengths: performance (used in game engines, HFT), backward compatibility with C, and zero-cost abstractions.

## C++ Paradigms

<div align="center">
  
| Paradigm | 	Description | 	Example |
| :------: | :--------: | :---------:
| Procedural	| C-like functions	| `void swap(int &a, int &b)`
OOP	| Objects with state+behavior	| `class Student { ... }`
Generic	| Type-agnostic algorithms	 | `template <typename T>`
Functional	| Lambda functions, immutability | 	`std::for_each(...)`

</div>

## **OOP Pilars**
### **1. Encapsulation**

Bundles data (attributes) and behavior (methods) into a single unit (class), restricting direct access to internal members. In C++98, `private` hides implementation details while `public` exposes controlled interfaces

```cpp
class BankAccount {  
private:  
    double _balance;  // Hidden state  

public:  
    void deposit(double amount) {  
        if (amount > 0) _balance += amount;  
    }  
};  
```
> [!IMPORTANT]
> Why it matters: Prevents state corruption and reduces coupling.

### **2. Abstraction**
Exposes only essential features while hiding complexity. Achieved in C++98 via abstract classes (pure virtual methods):
```cpp
class Device {  
public:  
    virtual void powerOn() = 0;  // Derived classes MUST implement  
};  
```

### **3. Polymorphism**
Allows methods to behave differently based on context. In C++98:

#### Compile-time: Function overloading
```cpp
void print(int);  
void print(float);  
```
#### Runtime: virtual methods enable overriding:
```cpp
class Shape {  
public:  
    virtual void draw() = 0;  // Must be implemented by child classes  
};  
```
### **4. Inheritance**
Enables derived classes to reuse attributes/methods from a base class. C++98 uses public inheritance for "is-a" relationships:


```cpp
class Animal { /* ... */ };  
class Dog : public Animal { /* ... */ };  // Dog "is-a" Animal  
```

## **CPP00 Key Concepts**  
### **1. Namespaces**
Prevents naming collisions by encapsulating code:

```cpp  
namespace ft {  
    int var = 42;  
}
```
> Key Use: Isolate project-specific code from global scope.

### **2. Classes & Member Functions**

```cpp
class Sample {  
public:  
    Sample(void);          // Constructor  
    ~Sample(void);         // Destructor  
    void bar(void) const;  // Const member function  
};
```

### **3. Streams (vs C stdio)**

```cpp
#include <iostream>  
std::cout << "Hello" << std::endl;  // Output  
std::cin >> input;                  // Input  
```

### **4. Initialization Lists**
More efficient than assignment in constructors
```cpp
Sample::Sample(int a, int b) : _a(a), _b(b) {}
```

### **5. Static & Const**

`static`: Shared across all class instances

`const`: Immutable values/function promises
