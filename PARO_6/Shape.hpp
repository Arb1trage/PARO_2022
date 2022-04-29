#pragma once

enum class Color : unsigned char{
	Red,
	Green,
    Blue
};

class Shape
{
public:
    Color color;
    Shape(Color color)
        :color{color}
    {}
    virtual ~Shape() {}

	Shape(const Shape&) = default;
	Shape& operator= (const Shape&) = default;
	Shape(Shape&&) noexcept = default;
	Shape& operator= (Shape&&) noexcept = default;

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
};
