#include<iostream>
using namespace std;

int main()
{
    int week = 4;
    cout<<"Su Mo Tu We Th Fr Sa"<<endl;
    for (int  cnt = 0; cnt< week; ++cnt)
    {
        cout.width(3);
        cout<<"";
    }
    for (int cnt = 1; cnt <= 31; ++cnt)
    {
        cout.width(3);
        cout<<cnt;
        if ((week+cnt)%7==0)
        {
            cout<<endl;
        }
        
    }
    cout<<endl;
    
}