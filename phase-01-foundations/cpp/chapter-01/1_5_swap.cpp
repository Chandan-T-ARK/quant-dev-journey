#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Before: a = " << a << ", b = " << b << std::endl;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "After: a = " << a << ", b = " << b << std::endl;

    return 0;
}
