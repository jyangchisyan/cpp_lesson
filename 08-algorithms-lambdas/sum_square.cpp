
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

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

    int total = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::cout << total << "\n";
    return 0;
}
