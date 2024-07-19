#include <iostream>

int main() {
    int arr[5] = {1, 4, 3, 5, 2};
    int maxnum = arr[0];

    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] > maxnum) {
            maxnum = arr[i];
        }
    }

    std::cout << "max number: " << maxnum << std::endl;

    
}
