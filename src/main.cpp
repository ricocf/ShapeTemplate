#include <iostream>
#include <memory>
#include "../include/Circle.h"
#include "../include/Shape.h"


int main(){
    auto circle_radius = std::make_shared<double>(3.54);
    Circle<std::shared_ptr<double>> circle(circle_radius);

    circle.area();
    circle.perimeter();
    circle.display();

    std::cout << "Total Shapes created: " << CountShape::getCount() << std::endl;


}