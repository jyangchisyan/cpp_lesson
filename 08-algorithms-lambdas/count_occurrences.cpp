#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int number;
    std::cin >> number;
    std::vector<int> numbers;
    for (int count =0 ; count < number; count++){
    	int value;
	std::cin >> value;
	numbers.push_back(value);
    }
    std::sort(numbers.begin(), numbers.end());

    int find_value;
    std::cin >> find_value;
    auto first = std::lower_bound(numbers.begin(), numbers.end(), find_value);
    auto afterLast = std::upper_bound(numbers.begin(), numbers.end(), find_value);

    std::cout << afterLast - first << "\n";
    return 0;
}
