#include <iostream>
#include <memory>
#include "../include/Circle.h"
#include "../include/Shape.h"
#include "../include/Triangle.h"

int main()
{
    auto circle_radius = std::make_shared<double>(3.54);
    Circle<std::shared_ptr<double>> circle(circle_radius);
    circle.display();

    Triangle<double> triangle(3.0, 4.0, 5.0);
    triangle.display();

    std::cout << "Total Shapes created: " << CountShape::getCount() << std::endl;
}