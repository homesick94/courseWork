#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape2D
{
public:
    Rectangle(const Point2D& p1, const Point2D& p2);
    virtual void setBounds(const Point2D& p1, const Point2D& p2);
    virtual void move(const Point2D& destination);
    virtual bool belongs(const Point2D& point);
};

#endif // RECTANGLE_H