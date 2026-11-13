
#include <algorithm>
#include <iostream>
#include <vector>

int main() {

    int number;
    std::cin >> number;
    std::vector<int> numbers = {};

    for( int count =0; count < number ; count++){
	int value;
	std::cin >> value;
	numbers.push_back(value);	
    }
	
    int erase_value;
    std::cin >> erase_value;

    auto result = std::find(numbers.begin(), numbers.end(), erase_value);

    if (result != numbers.end()) {
        numbers.erase(result);
    }

    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
    return 0;
}
