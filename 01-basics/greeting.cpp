
#include <iostream>
#include <string>

int main() {
    std::string name,color;
    std::cout << "請輸入名字：";
    std::getline(std::cin, name);
    std::cout << "請輸入您喜歡的顏色：";
    std::getline(std::cin,color);
    std::cout << "你好，" << name << "！你喜歡" << color << "色。\n";
    return 0;
}
