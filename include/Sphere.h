#ifndef SPHERE_H
#define SPHERE_H

#include <iostream>
#include <memory>
#include <vector>
#include "Shape.h"

namespace sphere_constants
{
    const auto pi = std::make_shared<double>(3.141);
}

template <class Sp>
class Sphere : public Shape<Sp>, public CountShape
{
private:
    std::vector<std::shared_ptr<Sp>> radius;

public:
    Sphere(Sp rad)
    {
        radius.push_back(std::make_shared<Sp>(rad));
        CountShape::count++;
    }
    Sp area() const override;
    Sp perimeter() const override;
    void display() const override;
};

template <class Sp>
Sp Sphere<Sp>::area() const
{
    return 4 * (*sphere_constants::pi) * (*radius[0]) * (*radius[0]);
}

template <class Sp>
Sp Sphere<Sp>::perimeter() const
{
    return 2 * (*sphere_constants::pi) * (*radius[0]);
}
template <class Sp>
void Sphere<Sp>::display() const
{
    std::cout << "Sphere: radius = (" << *radius[0] << ")" << ", area = " << area() << ", perimeter = " << perimeter() << std::endl;
}

#endif // SPHERE_H
