
#include <iostream>
#include <map>
#include <string>

int main() {

    int number = 0, find_value = 0;
    std::cin >> number;
    std::map<int, int> frequency;
    	for (int count=0 ; count < number ; count++){
		int value;
		std::cin >> value;
		if(!frequency[value]){
		   frequency[value]=1;
		}else{
		   frequency[value]+=1;
		}
	}
	
    std::cin >> find_value;
	if (!frequency[find_value]){
	   std::cout << "0\n";
	}
	else{
	   std::cout << frequency[find_value] << "\n";
	}
	
    return 0;
}
