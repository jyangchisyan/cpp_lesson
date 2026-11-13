#include <iostream>

int main() {
    int score;
    std::cout << "請輸入分數：";
    std::cin >> score;

    if (score >= 60) {
        std::cout << "及格\n";
    } else {
        std::cout << "不及格\n";
    }

    return 0;
}
