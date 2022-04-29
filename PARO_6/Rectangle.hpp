#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(double x, double y);
    Rectangle(const Rectangle& other) = default;
	Rectangle& operator= (const Rectangle& other) = default;

    double getArea() const override;
    double getPerimeter() const noexcept override;
    //Niewirtualna funkcja nie może być final
    virtual double getX() const final;
    double getY() const;
    void print() const override;

private:
    Rectangle() = delete;

    double x_;
    double y_;
};
