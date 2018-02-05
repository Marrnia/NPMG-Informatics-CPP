#include<iostream>
using namespace std;
int const N=100;
struct Human
{
    string Firstname;
    string Lastname;
    char gender;
    double height;
    int age;
};
void Read(Human person[N], int num)
{
    for(int i=0; i<num; i++)
    {
        cin>>person[i].Firstname;
        cin>>person[i].Lastname;
        cin>>person[i].gender;
        cin>>person[i].height;
        cin>>person[i].age;
    }
};
void FindGrandpa(Human person[N], int num)
{
    int grandpa;
    grandpa=person[0].age;
    for (int i=0; i<num; i++)
    {
        if(person[i].age>grandpa)
        {
            grandpa=person[i].age;
        }
    }
    for (int i=0; i<num; i++)
    {
        if(person[i].age==grandpa)
        {
            cout<<person[i].Firstname<<" "<<person[i].Lastname<<endl;
        }
    }
}
int main ()
{
    Human person[N];
    int num;
    cin>>num;
    Read(person, num);
    FindGrandpa(person, num);
    return 0;
}
