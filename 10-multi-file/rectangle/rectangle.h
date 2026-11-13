#pragma once

class Rectangle {
public:
    Rectangle(int sideLength, int sideWidth);
    int area() const;

private:
    int length = 0;
    int width = 0;
};
