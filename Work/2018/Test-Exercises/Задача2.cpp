#include<iostream>
using namespace std;

int digit(int num)
{
    int br=0;
    while(num/10!=0)
    {
        num%10;
        br++;
        num=num/10;
    }
    return br+1;
}

int sum(int num)
{
    int sum = 0, digitOne, digitTwo, digitThree;
    digitOne = num/100%10;
    digitTwo = num/10%10;
    digitThree = num%10;
    sum = digitOne + digitThree + digitTwo;
    return sum;
}

int main()
{
    int num;
    while(num!=0)
    {
        if(num!=0)
        {
            cin>>num;
            if(digit(num)==3)
            {
                cout<<"Count of digits = "<<digit(num)<<endl;
                cout<<"Sum of digits = "<<sum(num)<<endl;
            }
        }
    }
    return 0;
}
