#include <iostream>

int main() {
    int original = 42;
    int &reference = original;
    int* pointer = &original;

    std::cout << "original: " << original << std::endl;
    std::cout << "original address: " << &original << std::endl;
    std::cout << std::endl;

    std::cout << "reference: " << reference << std::endl;
    std::cout << "reference address: " << &reference << std::endl;
    std::cout << std::endl;

    std::cout << "pointer: " << *pointer << std::endl;
    std::cout << "pointer address: " << pointer << std::endl;
}