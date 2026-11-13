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

    auto result = std::lower_bound(numbers.begin(), numbers.end(), find_value);

    if ( result != numbers.end() && *result == find_value){
    	std::cout << result - numbers.begin() << "\n";
    } else{
	std::cout << -1 << "\n";	 
    }




    return 0;
}
