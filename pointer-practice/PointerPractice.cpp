#include <iostream>

int main() {
    int original = 42;
    int &reference = original;
    int* pointer = &original;

    std::cout << "original value: " << original << std::endl;
    std::cout << "original address: " << &original << std::endl;
    std::cout << std::endl;

    std::cout << "reference value: " << reference << std::endl;
    std::cout << "reference address: " << &reference << std::endl;
    std::cout << std::endl;

    std::cout << "pointer value: " << *pointer << std::endl;
    std::cout << "pointer address: " << pointer << std::endl;
}