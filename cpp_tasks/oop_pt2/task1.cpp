#include <iostream>
#include <csignal>

void signalHandler(int signal) {
    std::cout << "Interrupt signal (" << signal << ") received.\n";
   
    exit(signal);
}

int main() {
    
    signal(SIGINT, signalHandler);

    std::cout << "Program running. Press Ctrl+C to interrupt.\n";
    while (true) {
       //  do nothing
    }

    return 0;
}