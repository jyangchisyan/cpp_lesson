
#include <iostream>
#include <vector>

class Rectangle {
public:
    Rectangle(int width, int height) : width(width), height(height) {}

    int area() const {
        return width * height;
    }

private:
    int width;
    int height;
};

int main() {
	
    int number=0;
    std::vector<Rectangle> rectangles;
    std::cin >> number;
    for (int count =0; count < number; count++){
    	int width,length;
	std::cin >> width >> length;
	rectangles.push_back(Rectangle(width, length));
    }

    int amount =0;
    for (const Rectangle& rectangle : rectangles) {
        amount+= rectangle.area();
    }

    std::cout<<amount<<"\n";
    return 0;
}
