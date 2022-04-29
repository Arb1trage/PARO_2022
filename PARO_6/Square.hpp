#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double x);
    Square(const Square& other) = default;
	Square& operator=(const Square& other) = default;

    double getArea() const override;
    double getPerimeter() const noexcept override;
    void print() const override;

private:
    double getY() = delete; // should not have Y dimension
    Square() = delete;
};
