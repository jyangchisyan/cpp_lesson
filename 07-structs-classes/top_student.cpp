
#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
};

int main() {
    Student student1, student2;
    std::cin >> student1.name >> student1.score;
    std::cin >> student2.name >> student2.score;
	if (student1.score >= student2.score){
		std::cout << student1.name << std::endl;
	}else{
		std::cout << student2.name << std::endl; 
	}
    
    return 0;
}
