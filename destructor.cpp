#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() { 
        std::cout << "Constructor called!" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
        // Clean up any resources here (if needed)
    }
};

int main() {
    {
        MyClass obj; // Create an object
    } // Object goes out of scope here, so destructor is called

    // Other code...

    return 0;
}
