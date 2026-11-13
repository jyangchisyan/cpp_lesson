
#include <iostream>
#include <vector>

int countEven(const std::vector<int>& numbers) {
    int even=0;
    for (int number : numbers) {
	if (number % 2 == 0 ){
		even += 1;
	}
    }
    return even;
}

int main() {
    int number;
    std::cin >> number;
    std::vector<int> values;
    for (int count = 0 ; count < number ; count++){
	int value;
	std::cin >> value;
	values.push_back(value);
    }

    std::cout << countEven(values) << "\n";
    return 0;
}
