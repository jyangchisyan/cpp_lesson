#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int number =0 ;
    std::cin >> number;
    std::vector<int> numbers; 
    for(int count =0; count < number; count++){
	int value = 0;
	std::cin >> value;
	numbers.push_back(value);		
    }
    
    int find_number,replace_number;
    std::cin >> find_number >> replace_number;	
    std::replace(numbers.begin(), numbers.end(), find_number, replace_number);

    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
    return 0;
}
