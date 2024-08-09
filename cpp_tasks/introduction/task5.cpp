#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;
    
    for (int i = 1; i <= 12; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    

}