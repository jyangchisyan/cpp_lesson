#include <iostream>

void swapNumbers(int& first, int& second) {
    int temp;
    temp = first;
    first = second;
    second = temp;
}

int main() {
    int value1, value2;
    std::cin >> value1 >> value2; 
    swapNumbers(value1,value2);
    std::cout << value1 << " " << value2 << "\n";
    return 0;
}
