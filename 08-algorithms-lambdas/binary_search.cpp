#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int number;
    std::cin >> number;
    std::vector<int> numbers; 
    for(int count=0; count < number; count++){
    	int value;
	std::cin >> value;
	numbers.push_back(value);
    }
    
    std::sort(numbers.begin(), numbers.end());

    int find_value;
    std::cin >> find_value;

    if (std::binary_search(numbers.begin(), numbers.end(), find_value)) {
        std::cout << "找到了\n";
    } else {
        std::cout << "找不到\n";
    }
    return 0;
}
