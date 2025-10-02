#pragma once

#include "rectangle.h"
#include <cmath>

class RectangularFrustrum
{
public:
//constructer
    RectangularFrustrum(double l1, double w1, double l2, double w2, double h);

//getter
    double get_volume() const;
    double get_surface_area() const;

private:
    Rectangle rTop;
    Rectangle rBottom;
    double height;
};