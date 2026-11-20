#include <cassert>
#include <iostream>

bool isValidScore(int score){
	if (score >= 0 && score <= 100){
		return true;
	}else{
		return false;
	}	
}

int main(){
	assert(isValidScore(0));
	assert(!isValidScore(-1));
	assert(isValidScore(100));
	assert(!isValidScore(101));
	std::cout << "邊界測試通過\n";
	return 0;

}
