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

## **Key Concepts**  
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
