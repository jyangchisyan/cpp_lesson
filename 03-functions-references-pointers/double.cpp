#include <iostream>

int doubleNumber(int number) {
    return number * 2;
}

int main() {
    int integer =0;
    std::cout<< "請輸入整數：";
    std::cin >> integer;
    std::cout << doubleNumber(integer) << "\n";
    return 0;
}
