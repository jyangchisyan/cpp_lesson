#include <fstream>
#include <iostream>
#include <string>

int main() {
   std::string name;
  std::getline(std::cin, name);
   std::ofstream output("name.txt");
    output << name;
    output.close();

    std::ifstream input("name.txt");
    std::string message;
    std::getline(input, message);
    std::cout << "讀到的名字： " << message << "\n";

    return 0;
}
