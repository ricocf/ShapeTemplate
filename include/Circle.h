#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <memory>
#include "Shape.h"
namespace circle_constants
{
    const auto pi = std::make_shared<double>(3.141);
}

template <class C>
class Circle : public Shape<C>, public CountShape
{
private:
    std::shared_ptr<C> radius;

public:
    Circle(C rad)
    {
        radius = std::make_shared<C>(rad);
        CountShape::count++;
    }
    C area() const override;
    C perimeter() const override;
    void display() const override;
};

template <class C>
C Circle<C>::area() const
{
    auto area_value = ((*radius) * (*radius) * (*circle_constants::pi));
    return area_value;
}

template <class C>
C Circle<C>::perimeter() const
{
    auto perimeter_value = (2 * (*circle_constants::pi) * (*radius));
    return perimeter_value;
}

template <class C>
void Circle<C>::display() const
{
    std::cout << "Circle: radius = " << *radius << ", area = " << area() << ", perimeter = " << perimeter() << std::endl;
}

#endif // CIRCLE_H
