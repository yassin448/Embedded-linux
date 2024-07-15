#include <iostream>
#include <string>
using namespace std;
string decimalToBinary(int decimal) {
    if (decimal == 0) {
        return "0";
    }
    
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 1; 
    
   
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }
    
    return decimal;
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    
    string binary = decimalToBinary(number);
    cout << "Binary : " << binary << endl;
    
    
    
    cout << "Enter a binary number: ";
    int decimal = binaryToDecimal(binary);
    cin >> binary;
    cout << "Decimal : " << decimal << endl;


}