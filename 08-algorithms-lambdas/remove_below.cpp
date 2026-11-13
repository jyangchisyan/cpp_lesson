
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
	
    int below_value;
    std::cin >> below_value;


    numbers.erase(
	std::remove_if(numbers.begin(), numbers.end(), 
	[below_value](int number ){
	    return number < below_value;
	}),
	numbers.end()
    );

    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
    return 0;
}
