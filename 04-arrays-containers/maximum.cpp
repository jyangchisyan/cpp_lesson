
#include <iostream>

int main() {
   int integer1 ,integer2, integer3, integer4, integer5, max = 0;
   std::cin>> integer1 >>integer2 >> integer3 >> integer4 >> integer5; 
   int maximum[5] = {integer1, integer2, integer3, integer4, integer5};
   
   max = maximum[0];
	
    for (int index = 1; index < 5; index++) {
	if( max < maximum[index] ){
	   max = maximum[index];
	}
    }

	std::cout<< max <<std::endl;
    return 0;
}
