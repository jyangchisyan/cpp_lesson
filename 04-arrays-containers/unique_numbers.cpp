#include <iostream>
#include <set>

int main() {
    int number =0 ;
    std:: cin >> number;
    std::set<int> numbers;
    for (int count = 0 ; count < number ; count++){
	int value = 0;
	std::cin >> value;
	numbers.insert(value);	
    }
    
    std::cout<< numbers.size()<<"\n";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "\n";
    return 0;
}
