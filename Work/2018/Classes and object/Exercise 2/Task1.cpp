#include<iostream>
#include<cmath>
using namespace std;

class Circle
{
private:
    double x,y,r;
public:
    Circle();
    Circle(double);
    Circle(double,double,double);
    void show();
    double perimeter(double);
    double area(double);
    void crosspoints_Ox();
    void crosspoints_Oy();
};

Circle::Circle()
{
    x = 0.0;
    y = 0.0;
    r = 100;
}

Circle::Circle(double p)
{
    x=0.0;
    y=0.0;
    r=p;
}

Circle::Circle(double a, double b, double c)
{
    x=a;
    y=b;
    r=c;
}

void Circle::show()
{
    cout<<"a="<<x;
    cout<<" b="<<y;
    cout<<" c="<<r;
    cout<<endl;

}

double Circle::perimeter(double PI)
{
    double P = 2 * PI * r;
    return P;
}

double Circle::area(double PI)
{
    double S = PI * r * r;
    return S;
}

void Circle::crosspoints_Ox()
{
    cout<<"Crosspoint Ox = ("<<r-x<<";0)"<<endl;
}

void Circle::crosspoints_Oy()
{
    cout<<"Crosspoint Oy = ("<<"0;"<<r-y<<")"<<endl;
}

int main()
{
    Circle O1;
    double x,y,r,p,PI = 3.14;
    O1.show();
    cout<<"P = "<<O1.perimeter(PI)<<endl;
    cout<<"S = "<<O1.area(PI)<<endl;
    O1.crosspoints_Ox();
    O1.crosspoints_Oy();
    cin>>p;
    Circle O2(p);
    O2.show();
    cout<<"P = "<<O2.perimeter(PI)<<endl;
    cout<<"S = "<<O2.area(PI)<<endl;
    O2.crosspoints_Ox();
    O2.crosspoints_Oy();
    cin>>x>>y>>r;
    Circle O3(x,y,r);
    O3.show();
    cout<<"P = "<<O3.perimeter(PI)<<endl;
    cout<<"S = "<<O3.area(PI)<<endl;
    O3.crosspoints_Ox();
    O3.crosspoints_Oy();
    return 0;
}
