#include <iostream>


int main() {
    std::cout << "ASCII Code Table:" << std::endl;
    for (int x = 0; x <= 127; x++) {
        std::cout << "ASCII value: " << x << "| Character: " << char(x) << std::endl;
    }
   
}