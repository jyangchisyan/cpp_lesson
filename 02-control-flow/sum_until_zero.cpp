#include <iostream>

int main() {
    int count=0 ,number = 0;
    std::cin >> number;
    while (number != 0) {
        count += number;
	std::cin>>number;
    }

    std::cout<< count << "\n";
    return 0;
}
