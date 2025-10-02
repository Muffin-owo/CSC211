//Assignment for caluclate the volume and surface area of the frustrum
 
#include <iostream>
#include "rectangle.h"
#include "rectangularfrustrum.h"
using namespace std;


int main()
{
    double l1, w1, l2, w2, h;
    
    cout << "Input the length and width of the TOP rectangle (seperate by using space): ";
    cin >> l1 >> w1;

    cout << "Enter the length and width of the BOTTOM rectangle (seperate by using space): ";
    cin >> l2 >> w2;

    cout << "Enter the height of the frustrum: ";
    cin >> h;

    if (l1 <= 0 || w1 <= 0 || l2 <= 0 || w2 <= 0 || h <= 0)
    {
        cout << "All values must be positive numbers" << endl;
      
    }

    RectangularFrustrum frust(l1, w1, l2, w2, h);

    cout << "Volume: " << frust.get_volume() << endl;
    cout << "Surface Area: " << frust.get_surface_area() << endl;

    return 0;
}