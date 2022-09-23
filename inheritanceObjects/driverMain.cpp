#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <vector>
#include <string>

#include "DerivedCircle.h"
#include "derivedCircle.cpp"
#include "GeometricObject.h"
#include "geometricObject.cpp"

int main()
{
    // first, make the main attrubutes for a geometric shape
    GeometricObject parent;
    parent.setColor("red");
    parent.setFilled(true);
    std::cout << parent.getColor() << std::endl;
    std::cout << parent.isFilled() << std::endl;
    std::cout << parent.toString() << std::endl;

    // so circle is getting color and filled from geometric shape. you invoke
    // it the same way as you would if it were the parent
    Circle child_c1;
    child_c1 = (11);
    // or child_c1(3) this is the actual right way
    child_c1.setColor("black");
    child_c1.setFilled(false);
    std::cout << child_c1.getColor() << std::endl;
    std::cout << child_c1.isFilled() << std::endl;
    std::cout << child_c1.toString() << std::endl;
    std::cout << child_c1.getRadius() << std::endl;
    std::cout << child_c1.getDiameter() << std::endl;
    std::cout << child_c1.getPerimeter() << std::endl;

    // we can make the rectangle object but its like making a circle lass twice.. as long as we can see how one child is compiled, we should be good

    return 0;
}