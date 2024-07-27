#ifndef SHAPE_H
#define SHAPE_H

#include <memory>
#include <tuple>
#include <cmath>
#include <vector>

template <class S>
class Shape
{
public:
    virtual S area() const = 0;
    virtual S perimeter() const = 0;
    virtual void display() const = 0;
    virtual ~Shape() = default;
};

class CountShape
{
private:
    static int count;

public:
    static int getCount() { return count; }
    template <class C> friend class Circle;
    template <class T> friend class Triangle;
    template <class R> friend class Rectangle;
    template <class Sq> friend class Square;
    template <class Sp> friend class Sphere;
};

int CountShape::count = 0;

#endif // SHAPE_H