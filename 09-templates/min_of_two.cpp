#include <iostream>

template <typename ValueType>
ValueType smaller(ValueType first, ValueType second) {
    return first < second ? first : second;
}

int main() {
    int integer1, integer2;
    std::cin >> integer1 >> integer2;
    double double_value1, double_value2;
    std::cin >> double_value1 >> double_value2;

    std::cout << smaller(integer1, integer2) << "\n";
    std::cout << smaller(double_value1, double_value2) << "\n";
    return 0;
}
