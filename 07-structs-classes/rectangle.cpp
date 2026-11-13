#include <iostream>

class Rectangle {
public:
    Rectangle(int sideLength,int sideWidth) { 
	length = sideLength;
	width = sideWidth;		
    } 

    int area() const {
        return length * width;
    }

private:
    int length;
    int width;
};

int main() {
	int value1,value2;
	std::cin >> value1 >> value2 ;
    Rectangle rectangle(value1,value2);
    std::cout << rectangle.area() << "\n";
    return 0;
}
