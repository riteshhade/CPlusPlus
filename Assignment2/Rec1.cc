#include<iostream>
using namespace std;

void printNumber(int start,int end)
{
    if (start>end)
    {
        return;
    }
    cout<<start<<" ";
    printNumber(start+1,end);
    
}
int main()
{
    int start;
    cout<<"Enter the starting point: ";
    cin>>start;

    int end;
    cout<<"Enter the ending point: ";
    cin>>end;

    printNumber(start,end);
    cout<<endl;
    return 0;
}