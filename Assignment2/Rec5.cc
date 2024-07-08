#include<iostream>
using namespace std;

int sumOfN(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return n +sumOfN(n-1);
    }
}

int main()
{
    int n;

    cout<<"Enter the value: ";
    cin>>n;

    int sum =sumOfN(n);

    cout<<"Sum of the first " << n << " natural numbers: "<<sum<<endl;

    return 0;
}