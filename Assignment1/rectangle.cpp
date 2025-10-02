// rectangle.cpp 
#include "rectangle.h"

    //ctor - notice no return value but there are parens for parameters
    Rectangle::Rectangle()
    {
        width = length = 0.0;
    }

    //ctor - notice no return value but there are parens for parameters
    Rectangle::Rectangle(double len, double w)
    {
        length = len;
        width = w; 

    }
    //set the width value
    void Rectangle::set_width(double w)
    {
    width = w; 
    }
    //set the length value
    void Rectangle::set_length(double len)
    {
     length = len;
    }