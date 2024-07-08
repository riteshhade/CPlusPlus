#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n *factorial(n-1);
    }
    
}

int main()
{
    int number;

    cout<<"Enter a number to find its factorial: ";
    cin>>number;

    if (number<0)
    {
        cout<<"please enter positive numbers only...."<<endl;
    }
    else
    {
        int result = factorial(number);
        cout<<"Factorial of "<<number<<" is "<<result<<endl;
    }
    return 0;   
}