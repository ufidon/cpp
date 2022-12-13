#include "Circle2D.h"

int main()
{
    // 1) Dynamically creates a Circle2D object on the heap using the constructor with the following arguments (2, 2, 5.5) and assigns the object address to the pointer pCir1.
    Circle2D *pCir1 = new Circle2D(2, 2, 5.5);
    cout<<"pCir1 is created with center at ("<<pCir1->getx()<<","<<pCir1->gety()<<") and radius of " << pCir1->getradius() <<endl;

    // 2) Creates a Circle2D object cir2(-6, -3, 1.5).
    Circle2D cir2(-6, -3, 1.5);
    cout<<"cir2 is created with center at ("<<cir2.getx()<<","<<cir2.gety()<<") and radius of " << cir2.getradius() <<endl;

    // 3) Calls getNumberOfCircles() function.
    cout << "The current number of circles is " << Circle2D::getNumberOfCircles() << endl;

    // 4) Creates a Circle2D object cir3 with the copy constructor with the cir2 object as an argument.
    Circle2D cir3 = cir2;
    cout<<"cir3 is copied from cir2 with center at ("<<cir3.getx()<<","<<cir3.gety()<<") and radius of " << cir3.getradius() <<endl;

    // 5) Calls getNumberOfCircles() function from the cir3.
    cout << "The current number of circles is " << Circle2D::getNumberOfCircles() << endl;

    // 6) Calls overlaps(const Circle2D& circle) function from pCir1 pointer with the cir2 as an argument.
    cout << "pCir1 overlaps cir2 = " << pCir1->overlaps(cir2) << endl;

    // 7) Calls overlaps(const Circle2D& circle) function from cir3 object with the cir2 as an argument.
    cout << "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << endl;

    // 8) Frees the memory allocated dynamically.
    delete pCir1;
    cout<<"pCir1's memory is freed."<<endl;

    // 9) Calls getNumberOfCircles() function.
    cout << "The current number of circles is " << Circle2D::getNumberOfCircles() << endl;
}