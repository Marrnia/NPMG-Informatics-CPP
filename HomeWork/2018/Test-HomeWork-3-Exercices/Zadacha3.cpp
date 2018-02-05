#include<iostream>
#include<algorithm>
using namespace std;
#define Size 15

struct Person
{
    string firstName;
    string lastName;
    double height;
    int age;
    char gender;
};

void Read(Person person[Size],int num)
{
    for(int i = 0 ; i< num; i++)
    {
        cin>>person[i].firstName;
        cin>>person[i].lastName;
        cin>>person[i].height;
        cin>>person[i].age;
        cin>>person[i].gender;
    }
}

void BubbleSort(Person person[Size], int num)
{
    for(int i = 0; i<num-1; i++)
    {
        for(int j = 0; j < num - i - 1; j++)
        if(person[j].age>person[j+1].age)
            swap(person[j].age,person[j+1].age);
    }
}

void Write(Person person[Size], int num)
{
    for(int i = 0; i< num; i++)
    {
        cout<<person[i].firstName<<" ";
        cout<<person[i].lastName<<" ";
        cout<<person[i].height<<" ";
        cout<<person[i].age<<" ";
        cout<<person[i].gender<<endl;
    }
}

int main()
{
    Person person[Size];
    int num;
    cin>>num;
    Read(person,num);
    BubbleSort(person,num);
    Write(person,num);
    return 0;
}

/*
Martin
Jivkov
177
16
M
Jordan
Jordanov
179
17
M
Vesselin
Jivkov
175
15
M
*/
