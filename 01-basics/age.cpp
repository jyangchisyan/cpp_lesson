#include <iostream>

int main() {
    int age,year;
    std::cout << "現在是西元幾年？";
    std::cin >> year;
    std::cout << "你今年幾歲？";
    std::cin >> age;

    std::cout << "五年後是西元 " << year + 5 << " 年，你會是 " << age + 5 << "歲。\n";
    return 0;
}
