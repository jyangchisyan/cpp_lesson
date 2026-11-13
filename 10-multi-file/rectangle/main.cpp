#include <iostream>
#include "rectangle.h"

int main(){

    int value1, value2;
    std::cin >> value1 >> value2;
    Rectangle rectangle(value1, value2);
    std::cout << rectangle.area() << "\n";




    return 0;
}
