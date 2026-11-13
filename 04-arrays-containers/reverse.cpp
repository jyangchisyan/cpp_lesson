#include <iostream>
#include <vector>

int main() {
    int n=0;
    std::vector<int> numbers;
    std::cin>> n ;

    for(int count=0 ; count <n ; count++){
	int integer=0;
	std::cin>> integer;
	numbers.push_back(integer);
    }

    for (int count =n-1 ; count >=0 ; count--){
	std::cout<<numbers[count]<<" ";
    }
    std::cout<< "\n";
    return 0;
}

