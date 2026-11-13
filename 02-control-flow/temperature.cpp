#include <iostream>

int main(){
	int temperature;
	std::cout <<"請輸入溫度：";
	std::cin>> temperature;

	if (temperature >= 30){
		std::cout<< "天氣很熱\n";
	} else {
		std::cout<< "天氣還好\n";
	}

	return 0;
}
