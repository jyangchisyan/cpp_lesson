#include <iostream>
#include <map>

int main() {
    int number = 0;
    std::cin >> number;
    std::map<int, int> frequency;
    for (int count = 0; count < number ; count++){
	int value = 0;
	std::cin >> value;
	frequency[value]++;
    }

    for (const auto& entry : frequency) {
        std::cout << entry.first << " " << entry.second << "\n";
    }
    return 0;
}
