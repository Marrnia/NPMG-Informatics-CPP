#include<iostream>
#include<cmath>
using namespace std;

class Triangle
{
private:
    double a,b,c;
public:
    void read();
    void write();
    double face();
    double perimeter();
    void triangleByAngles();
    void triangleBySides();
};

void Triangle::read()
{
    do
    {
        cin>>a>>b>>c;
    }
    while(a < c + b);
}

void Triangle::write()
{
    cout<<a<<endl<<b<<endl<<c<<endl;
}

double Triangle::face()
{
    double p = (a+b+c)/2;
    double S = sqrt(p*(p-a)*(p-b)*(p-c));
    return S;
}

double Triangle::perimeter()
{
    double P = a+b+c;
    return P;
}

void Triangle::triangleByAngles()
{
    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        cout<<"The triangle is rectangular.\n";
    else if (a*a < b*b + c*c || b*b < c*c + a*a || c*c == a*a + b*b)
            cout<<"The triangle is triangular.\n";
    else cout<<"The triangle is angled.\n";
}

void Triangle::triangleBySides()
{
    if(a==b && a!=c || a==c && a!=b || b==c && b!=a)
        cout<<"The triangle is isosceles.\n";
    else if(a==b && b==c)
        cout<<"The triangle is equilateral.\n";
    else cout<<"The triangle is versatile.\n";
}

int main()
{
    Triangle T1,T2;
    cout<<"T1:\n";
    T1.read();
    T1.write();
    cout<<"T2:\n";
    T2.read();
    T2.write();
    if(T1.face() >= T2.face())
    {
        cout<<"The face of bigger triangle is "<<T1.face()<<"\nSides:\n";
        T1.triangleBySides();
    }
    else
    {
        cout<<"The face of bigger triangle is "<<T2.face()<<"\nSides:\n";
        T2.triangleBySides();
    }
    if(T1.perimeter() >= T2.perimeter())
    {
        cout<<"The perimeter of bigger triangle is "<<T1.perimeter()<<"\nAngles:\n";
        T1.triangleByAngles();
    }
    else
    {
        cout<<"The perimeter of bigger triangle is "<<T2.perimeter()<<"\nAngles:\n";
        T2.triangleByAngles();
    }

    return 0;
}
