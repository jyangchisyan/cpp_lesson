#include <cassert>
#include <iostream>

bool isPassing(int score){
	if (score >= 60){
		return true;
	}else{
		return false;
	}	
}

int main(){
	assert(isPassing(60));
	assert(!isPassing(59));
	assert(isPassing(100));
	assert(!isPassing(0));
	std::cout << "測試通過\n";
	return 0;

}
