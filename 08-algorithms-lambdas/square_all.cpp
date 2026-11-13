
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
	


    std::transform(numbers.begin(), numbers.end(), numbers.begin(), 
	[](int number ){
	    return number * number;
	});

    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
    return 0;
}
