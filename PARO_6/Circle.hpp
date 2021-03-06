#pragma once

#include "Shape.hpp"

class Circle final: public Shape
{
public:
    Circle(double r);
    Circle(const Circle& other) = default;
	Circle& operator= (const Circle& other) = default;

    double getArea() const noexcept override;
    double getPerimeter() const override;
    double getRadius() const;

    [[ deprecated ]]double getPi() const;
    void print() const override;

private:
    Circle() = delete; // doesn't allow to call default constructor
    double r_;
};
