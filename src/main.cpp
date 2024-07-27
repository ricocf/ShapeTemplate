#include <iostream>
#include "../include/Shape.h"
#include "../include/include.h"

int main()
{

    std::vector<std::unique_ptr<Shape<double>>> shapes;
    shapes.push_back(std::make_unique<Circle<double>>(5.5));
    shapes.push_back(std::make_unique<Triangle<double>>(3.0, 4.5, 5.0));
    shapes.push_back(std::make_unique<Rectangle<double>>(4.5, 8.5));
    shapes.push_back(std::make_unique<Square<double>>(5.0));
    shapes.push_back(std::make_unique<Sphere<double>>(6.2));

    for (int i = 0; i < shapes.size(); i++)
    {
        shapes[i]->display();
    }

    // Circle<double> circle(5.5);
    // circle.display();

    // Triangle<double> triangle(3.0, 4.5, 5.0);
    // triangle.display();

    // Rectangle<double> rectangle(4.5, 8.5);
    // rectangle.display();

    // Square<double> square(5.0);
    // square.display();

    std::cout << "Total Shapes created: " << CountShape::getCount() << std::endl;
}