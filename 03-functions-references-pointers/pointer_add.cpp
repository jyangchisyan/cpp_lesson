#include <iostream>

void addTen(int* number){
	*number+=10;
}

int main() {
    int value = 0;
    std::cin >> value;
    addTen(&value);
    std::cout << value << "\n";
    return 0;
}
