#include<iostream>

class Rectangle {
public:
    Rectangle(int sideLength,int sideWidth) : length(sideLength), width(sideWidth){} 
   
    int area() const {
        return length * width;
    }

    void scale(int factor){
    	 length *= factor;
	 width *= factor;
    }
private:
    int length;
    int width;
	
};


int main(){
    int value1, value2, value3;
    std::cin >> value1 >> value2;
    Rectangle rectangle(value1,value2);
    std::cout << rectangle.area() << "\n";
    std::cin >> value3;
    rectangle.scale(value3);
    std::cout << rectangle.area() << "\n";


}
