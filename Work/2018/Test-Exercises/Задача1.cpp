#include<iostream>
using namespace std;

void grow(double &a, double &b, double &c)
{
    for(int i = 0; i<2; i++)
    {if(b<=a)
        swap(a,b);
    if(c<=b)
        swap(b,c);}
}

bool is_triangle(double a, double b, double c)
{
    if(a < b + c && b < c + a && c < a + b)
    {
        return 1;
    }
    else return 0;
}

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    grow(a,b,c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    if(is_triangle(a,b,c) == 1)
    {
        cout<<"Triangle.";
    }
    return 0;
}
