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
    double square();
    double perimeter();
    void outputAngles();
    void outputType();
};

void Triangle::read()
{
    cin>>a>>b>>c;
}

void Triangle::write()
{
    cout<<a<<endl<<b<<endl<<c<<endl;
}

double Triangle::square()
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

void Triangle::outputAngles()
{
    if(a*a == (b*b + c*c) || b*b == (c*c + a*a) || c*c == (a*a + b*b))
        cout<<"Triangle is rectangular.\n";
    else if(a*a < b*b + c*c || b*b < c*c + a*a || c*c < a*a + b*b)
        cout<<"Triangle is triangular.\n";
    else cout<<"Triangle is angled.\n";
}

void Triangle::outputType()
{
    if(a==b && b==c && c==a)
        cout<<"Triangle is equilateral.\n";
    else if (a==b && c!=a || a==c && b!=a || c==b && a!=c)
        cout<<"Triangle is isosceles.\n";
    else cout<<"Triangle is versatile.\n";
}

int main()
{
    Triangle T1;
    T1.read();
    T1.write();
    cout<<T1.square()<<endl;
    cout<<T1.perimeter()<<endl;
    T1.outputAngles();
    T1.outputType();
}

