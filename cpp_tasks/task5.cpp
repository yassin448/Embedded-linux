#include <iostream>

int& f() {
    static int x = 0; 
    std::cout << "Current value of x: " << x << std::endl;
    return x;
}

int main() {

    f() = 10; // Sets static x to 10
    f();      // Prints 10
    f() = 0;  // Sets static x to 0
    f();      // Prints 0

    
}

