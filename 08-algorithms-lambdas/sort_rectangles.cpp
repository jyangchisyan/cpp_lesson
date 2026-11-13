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
    std::sort(rectangles.begin(), rectangles.end(),
	[](const Rectangle& first, const Rectangle& second){
	   return first.area() < second.area();
	});
	
	for(const Rectangle& rectangle : rectangles){
		std::cout<< rectangle.area() << "\n";
	}
    return 0;
}
