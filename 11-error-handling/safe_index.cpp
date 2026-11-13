#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
    int number;
    std::cin >> number;
    std::vector<int> numbers;
    for (int count = 0; count < number ; count ++){
    	int value;
	std::cin >> value;
	numbers.push_back(value);
    }   

    int at_value;
    std::cin >> at_value;

    try {
        std::cout << numbers.at(at_value) << "\n";
    } catch (const std::out_of_range& error) {
        std::cout << "索引超出範圍\n";
    }

    return 0;
}
