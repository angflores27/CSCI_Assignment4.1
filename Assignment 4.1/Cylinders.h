//
//  Cylinders.h
//  Assignment 4.1
//
//  Created by Angela Flores on 11/4/22.
//

#ifndef Cylinders_h
#define Cylinders_h

class Cylinder
{
private:
    double radius;
    double height;
public:
    Cylinder();
    Cylinder (double r, double h);
    void setRadius (double r);
    void setHeight (double h);
    double getRadius ();
    double getHeight ();
    void display ();
};

//Implementation

//constructors
Cylinder::Cylinder()
{
    radius =1;
    height =1;
}
Cylinder::Cylinder (double r, double h)
{
    radius =r;
    height =r;
}

//set and get
void Cylinder::setRadius (double r)
{
    radius =r;
}
double Cylinder::getRadius()
{
    return radius;
}
void Cylinder::setHeight (double h)
{
    height =h;
}
double Cylinder::getHeight()
{
    return height;
}
void Cylinder::display()
{
    cout<<"This is a cylinder."<<endl;
    cout<<"The radius is: "<<radius<<endl;
    cout<<"The height is: "<<height<<endl;
}


#endif /* Cylinders_h */
