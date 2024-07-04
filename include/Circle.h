#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <memory>
#include "Shape.h"
const auto pi = std::make_shared<double>(3.141);

template <class C>
class Circle : public Shape<C>, public CountShape
{
private:
    C radius;

public:
    Circle(C rad) : radius(rad) { CountShape::count++; }
    C area() const override;
    C perimeter() const override;
    void display() const override;
};

template <class C>
C Circle<C>::area() const
{
    auto area_value = std::make_shared<double>((*radius) * (*radius) * (*pi));
    return area_value;
}

template <class C>
C Circle<C>::perimeter() const
{
    auto perimeter_value = std::make_shared<double>(2 * (*pi) * (*radius));
    return perimeter_value;
}

template <class C>
void Circle<C>::display() const
{
    std::cout << "Circle: radius = " << *radius << ", area = " << *area() << ", perimeter = " << *perimeter() << std::endl;
}

#endif // CIRCLE_H
