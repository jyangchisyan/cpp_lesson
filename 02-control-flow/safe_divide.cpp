
#include <iostream>

int main() {
    int integer1,integer2;
    float float1;
    if (!(std::cin >> integer1 >> integer2)) {
        std::cout << "輸入錯誤\n";
        return 1;
    }

    if (integer2 == 0 ){
     	std::cout << "不能除以零\n";
	return 1;
    }

    float1 = static_cast<float>(integer1) / integer2;
    std::cout << float1 << "\n";
    return 0;
}
