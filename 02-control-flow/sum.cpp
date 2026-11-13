#include <iostream>

int main() {
    int integer, sum = 0;
    std::cout<< "請輸入正整數： ";
    std::cin >> integer;
    for (int count = 1; count <= integer; count++) {
        sum += count;
    }
	std::cout << sum <<std::endl;
    return 0;
}

