#include <iostream>

void printDouble(const int* number){
	if ( number == nullptr){
	   std::cout << "沒有數值\n";
	}else{
	   std::cout << *number*2 << "\n";
	}

}	


int main() {
    int value = 0 ;

    std::cin >> value ;
    printDouble(&value);
    printDouble(nullptr);
    return 0;
}
