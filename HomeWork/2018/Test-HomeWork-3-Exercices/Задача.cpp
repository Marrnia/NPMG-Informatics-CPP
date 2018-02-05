#include<iostream>
using namespace std;
#define Size 15

struct Human
{
    string firstName;
    string lastName;
    double height;
    int age;
    char gender;

};

void Read(Human person[Size],int num)
{
    for(int i = 0; i<num; i++)
    {
        cin>>person[i].firstName>>person[i].lastName>>person[i].height>>person[i].age>>person[i].gender;
        cout<<endl;
    }
}

void Write(Human person[Size], int num)
{
    for(int i = 0; i<num; i++)
    {
        cout<<person[i].firstName<<" "<<person[i].lastName<<" "<<person[i].height<<" "<<person[i].age<<" "<<person[i].gender<<endl;
    }
}

int main()
{
    Human person[Size];
    int num = 0;
    cin>>num;
    Read(person,num);
    Write(person,num);
    return 0;
}
