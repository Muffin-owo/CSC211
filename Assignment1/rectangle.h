//rectangle.h


#pragma once

class Rectangle
{
public:
    Rectangle(); //Class Constructor (default)
    Rectangle(double, double); //Overloaded Constructor
    void set_width(double);
    
    void set_length(double);
    
    double get_width() const
        { return width; }
        
    double get_length() const
        { return length; }
        
    double get_area() const
        { return length * width; }
private:
    double width;
    double length;
};
