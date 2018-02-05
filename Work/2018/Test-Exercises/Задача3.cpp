#include<iostream>
using namespace std;
#define SIZE 10

void readArray(int Array[SIZE][SIZE], int K)
{
    for(int i = 0; i < K; i++)
    {
        for(int j = 0; j < K; j++)
            cin>>Array[i][j];
    }
}

void writeArray(int Array[SIZE][SIZE],int K)
{
    for(int i = 0; i < K; i++)
    {
        for(int j = 0; j < K; j++)
            cout<<Array[i][j]<<" ";
        cout<<endl;
    }
}

int sumOfArray(int Array[SIZE][SIZE], int K)
{
    int sum = 0.0;
    for(int i = 0; i<K; i++)
    {
        for(int j = 0; j<K; j++)
        {
            sum+=Array[i][j];
        }
    }
    return sum;
}

int minimumOfArray(int Array[SIZE][SIZE],int K)
{
    int minimum = Array[0][0];
    for(int i = 0; i<K; i++)
    {
        for(int j = 0; j<K; j++)
        {
            if(i==j)
                if(minimum>Array[i][j])
                    minimum = Array[i][j];
        }
    }
    return minimum;
}

void writeDiagonal(int Array[SIZE][SIZE],int K)
{
    /*for(int i = 0; i<K; i++)
    {
        cout<<Array[i][K-i-1]<<" ";
    }*/
    for(int i = 0; i<K; i++)
    {
        for(int j = 0; j<K; j++)
        {
            cout<<" ";
            if(i + j == K - 1)
                cout<<Array[i][j]<<" ";
        }
        cout<<endl;
    }
}

int sumOfShell(int Array[SIZE][SIZE],int K)
{
    int sum = 0;
    for(int i = 0; i<K; i++)
    {
        for(int j = 0; j<K; j++)
        {
            if(i==0 || j==K-1 || j==0 || i==K-1)
                sum+=Array[i][j];
        }
    }
    return sum;
}

void transformArray(int Array[SIZE][SIZE], int K)
{
    for(int i = 0; i<K; i++)
    {
        for(int j = 0; j<K; j++)
        {
            if(i==0 || j==K-1 || j==0 || i==K-1)
            {
                Array[i][j]=0;
            }/*???????????????????WTF?????????? Не разбирам условието ?????????????????????*/
            else Array[i][j]=2;
            cout<<Array[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int Array[SIZE][SIZE], K;
    cin>>K;
    if(K<10)
    {
        readArray(Array,K);
        cout<<"-------\n";
        writeArray(Array,K);
        cout<<"-------\n";
        cout<<sumOfArray(Array,K)<<endl;
        cout<<"-------\n";
        cout<<minimumOfArray(Array,K)<<endl;
        cout<<"-------\n";
        writeDiagonal(Array,K);
        cout<<"-------\n";
        cout<<sumOfShell(Array,K)<<endl;
        cout<<"-------\n";
        transformArray(Array,K);
    }
    else cout<<"\nK < 10\n";
    return 0;
}
