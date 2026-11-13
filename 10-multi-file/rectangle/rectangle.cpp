
#include "rectangle.h"

 Rectangle::Rectangle(int sideLength,int sideWidth) { 
   length = sideLength;
   width = sideWidth;                       
 }
 
 int Rectangle::area() const {
    return length * width;
 }

