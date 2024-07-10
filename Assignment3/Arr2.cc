#include<iostream>
using namespace std; 

bool isPrime(int num)
{
    if (num==0||num==1)
    {
        return false;
    }
    for (int i = 2; i <num; i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}
int main()
{
    int num;
    int arr[100];
    cout<<"Enter the first number: ";
    cin>>num;
    cout<<isPrime(num);

    for (int i = num; i < num+100; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
        
    }
    
    return 0;
}