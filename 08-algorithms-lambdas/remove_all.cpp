
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


    numbers.erase(
	std::remove(numbers.begin(), numbers.end(), erase_value),
	numbers.end()
    );

    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
    return 0;
}
