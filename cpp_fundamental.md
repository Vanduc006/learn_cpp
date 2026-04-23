# Variables & Data types

## Scope

```cpp
#include <iostream>

int main() {
    int max_global = 100;
    // Scope 1
    {
        int max_local = 10;
    }
    // Scope 2
    {
        int max_local = 20;
        std::cout << max_local << std::endl;
    }
    
}
```

## Constants
- define
- const
```cpp
#include <iostream>
#define MAX_GLOBAL 100 // macro

int main() {
    const int max_global = 100; // Can't change
}
```

## Assignment operators and arithmetic operators

```cpp
#include <iostream>

int main() {
    int age = 10;
    int next_age = ++age;

    std::cout << next_age << age; // 11 11

    int age2 = 10;
    int next_age2 = age2++;

    std::cout << next_age2 << age2; // 10 11
}
```

## Data type casting and ASCII character set

```cpp
#include <iostream>

int main() {
    int a = 10;
    int b = 12;
    float c = (float) a / b;
    std::cout << (int) c << std::endl;
}
```

## Triary operators

```cpp
#include <iostream>

int main() {
    int a = 10;
    int b = 12;
    int c = (a > b) ? a : b;
    std::cout << c << std::endl;
}
```

## Break, continue, goto
- break: exit loop
- continue: skip current iteration
- goto: jump to label

## 2D array

```cpp
#include <iostream>

// arr[row][col]
int main() {
    int arr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
```

## String

```cpp
#include <iostream>
#include <string>

int main() {
    string str;
    std::cin.ignore();
    getline(std::cin, str);
    std::cout << str << std::endl;
}
```
### built in function
- str.find(s)
- str.substr(x, y)
- str.erase(x, n)
- str.replace(x, n, s)
- str.compare(s)
- str.size() or str.length()
- str.insert(x, s)

## Pointer

```cpp
#include <iostream>

void input(int *n);

int main() {
    // with variable
    int a = 10;
    int *ptr = &a;
    std::cout << *ptr << std::endl;

    // with array
    int numbers[4] = {1, 2, 3, 4};
    int *i_ptr;

    for (*i_ptr = &numbers[0]; *i_ptr < &numbers[0]+4; i_ptr++) {
        std::cout << *i_ptr << " ";
    }

    // with func
    input(&a);
    std::cout << a << std::endl;
}

void input(int *n) {
    std::cin >> *n;
}
```

## Cap phat dong

### Stack & Heap
- Stack storage local variable
    ```cpp
    int a = 10;
    int *ptr = &a;
    ```

- Heap storage dynamic variable
    ```cpp
    int *ptr = new int(10);
    std::cout << *ptr << std::endl;
    delete ptr;
    ```
- Speed : Stack > Heap
- Size : Stack < Heap

## Dynamic array
```cpp
#include <iostream>

int main() {
    int *b = new int[3];

    // add value
    for (int i=0; i < 3; i++) {
        b[i] = 1;
    }

    int *new_b = new int[4];
    for (int i=0; i < 3; i++) {
        new_b[i] = b[i];
    }

    delete[] b;
    // new size, copy value, delete old
    b = new_b;

    for (int i=0; i < 4; i++) {
        std::cout << b[i] << " ";
    }
}
```

## Struct

```cpp
#include <iostream>
#include <string>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    string name;
    int age;
    Date dob;

    // constructor
    Student() {}

    Student(string name, int age, Date dob) {
        this->name = name;
        this->age = age;
        this->dob = dob;
    }

    // method
    void print() {
        std::cout << name << " " << age << " " << dob.day << " " << dob.month << " " << dob.year << std::endl;
    }
};

int main() {
    Student s1;
    s1.name = "John";
    s1.age = 20;

    Student s2 = Student{"Duc", 20};
    s1.print();

    Student[10] students = {
        s1, s2        
    };  
}
```

## Nap chong phan tu

```cpp
struct Point {
    int x; int y;

    friend istream& operator>>(istream &is, Point &p) {
        std::cout << "Enter x: ";
        is >> p.x;
        std::cout << "Enter y: ";
        is >> p.y;
        return is;
    } 

    friend ostream& operator<<(ostream &os, Point &p) {
        os << "x: " << p.x << " y: " << p.y << std::endl;
        return os;
    }

    friend Point operator+(Point p1, Point p2) {
        Point p;
        p.x = p1.x + p2.x;
        p.y = p1.y + p2.y;
        return p;
    }
}
```




