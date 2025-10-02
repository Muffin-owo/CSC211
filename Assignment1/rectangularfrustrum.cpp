#include "rectangularfrustrum.h"

// ctor
RectangularFrustrum::RectangularFrustrum(double l1, double w1, double l2, double w2, double h)
{
    //vaildation
    if (l1 <= 0 || w1 <= 0 || l2 <= 0 || w2 <= 0 || h <= 0)
    {
        rTop = Rectangle(0, 0);
        rBottom = Rectangle(0, 0);
        height = 0;
    }
    else
    {
        rTop = Rectangle(l1, w1);
        rBottom = Rectangle(l2, w2);
        height = h;
    }
}

// Volume
double RectangularFrustrum::get_volume() const
{
    double A1 = rTop.get_area();
    double A2 = rBottom.get_area();
    return (height / 3.0) * (A1 + A2 + sqrt(A1 * A2)); //formula
}

// Surface Area
double RectangularFrustrum::get_surface_area() const
{
    double l1 = rTop.get_length();
    double w1 = rTop.get_width();
    double l2 = rBottom.get_length();
    double w2 = rBottom.get_width();

    return (l1 * w1) + (l2 * w2) + height * (l1 + l2 + w1 + w2); //formula
}