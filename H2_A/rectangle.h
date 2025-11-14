#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle();
    void setWidth(double newWidth);

    void setHeight(double newHeight);

    double getArea() const;

    double getCircum() const;

private:
    double width;
    double height;
};

#endif // RECTANGLE_H
