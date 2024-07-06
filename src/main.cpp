#include <iostream>
#include <memory>
#include "../include/Circle.h"
#include "../include/Shape.h"
#include "../include/Triangle.h"
#include "../include/Rectangle.h"
#include "../include/Square.h"

int main()
{
    auto circle_radius = std::make_shared<double>(3.54);
    Circle<std::shared_ptr<double>> circle(circle_radius);
    circle.display();

    Triangle<double> triangle(3.0, 4.5, 5.0);
    triangle.display();


    Rectangle<double> rectangle(4.5, 8.5);
    rectangle.display();

    std::cout << "Total Shapes created: " << CountShape::getCount() << std::endl;
}