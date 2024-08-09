#include <iostream>


int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    int sum = sumOfDigits(abs(number));
    std::cout << "Sum of digits of " << number << " is: " << sum << std::endl;
    
   
}