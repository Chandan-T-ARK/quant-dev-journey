#include <iostream>
#include <cmath>

int main() {
    double r;
    std::cout << "Enter the radius of a circle: ";
    std::cin >> r;
    double area = M_PI * r * r;
    std::cout << "Area of the circle is: " << area << std::endl;
    return 0;
}
