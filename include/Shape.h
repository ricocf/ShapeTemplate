#ifndef SHAPE_H
#define SHAPE_H

template <class S>
class Shape
{
private:
    static int count;

public:
    virtual S area() const = 0;
    virtual S perimeter() const = 0;
    virtual void display() const = 0;
    virtual ~Shape() {}
    static int getCount() { return count; }
};

class CountShape
{
private:
    static int count;

public:
    static int getCount() { return count; }
    template <class C> friend class Circle;
    template <class T> friend class Triangle;
};

int CountShape::count = 0;

#endif // SHAPE_H