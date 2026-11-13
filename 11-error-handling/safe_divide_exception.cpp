#include <iostream>
#include <stdexcept>

double safeDivide(int numerator, int denominator){	
    if (denominator == 0 ){
	throw std::invalid_argument("不能除以零");	
    }
    return static_cast<double>(numerator) / denominator;
 
}


int main() {
    int number1, number2;
    std::cin >> number1 >> number2;

    try {
        std::cout << safeDivide(number1, number2) << "\n";
    } catch (const std::invalid_argument& error) {
        std::cout << error.what() << "\n";
    }

    return 0;
}
