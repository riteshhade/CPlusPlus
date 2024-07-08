#include<iostream>
using namespace std;

int reverseNumber(int num,int reversedNum)
{
    if (num==0)
    {
        return reversedNum;
    }
    else{
        reversedNum=reversedNum*10+num%10;
        return reverseNumber(num/10,reversedNum);
    }
    
}
int main()
{
    int n,reversedNumber=0;
    cout<<"Enter a number: ";
    cin>>n;

    reversedNumber=reverseNumber(n,reversedNumber);

    cout<<"Reversed number: "<<reversedNumber<<endl;

    return 0;
}