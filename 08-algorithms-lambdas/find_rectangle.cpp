#include <algorithm>
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
	
    int level = 0;
    std::cin >> level;
	

    auto result = std::find_if(rectangles.begin(), rectangles.end(),
	[level](const Rectangle& rectangle){
	   return rectangle.area() >= level ;
	});

    if (result != rectangles.end()) {
        std::cout << (*result).area() << "\n";
    } else {
        std::cout << "找不到\n";
    }

    return 0;
}
