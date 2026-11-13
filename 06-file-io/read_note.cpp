
#include <fstream>
#include <iostream>
#include <string>
int main() {
    std::ifstream input("note.txt");

    if (!input) {
        std::cout << "找不到檔案\n";
        return 1;
    }
    std::string message;
    std::getline(input, message);
    std::cout << message <<"\n";
    return 0;
}
