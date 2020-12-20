#ifndef _FIGURE_H
#define _FIGURE_H

class Point2D
{   
    double X,Y;
    public:
        void Set(double Xo, double Yo);
        void Move(double dX,double dY);
        void Scale(double sX,double sY);
};
class Circle
{
    Point2D Center ;
    double Radious;
    public: 
        void Set(double Xo,double Yo,double r);
        void Move(double dX, double dY);
        double Area();
        double Perimeter();

};
#endif