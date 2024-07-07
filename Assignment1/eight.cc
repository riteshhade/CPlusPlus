#include<iostream>
using namespace std; 

int main()
{
    int num;
    cout<<"Enter the first number to print table format:  ";
    cin>>num;
    for (int i = num-1; i < num+10; i++)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    for (int i = num; i < num+10; i++)
    {
        cout<<i<<" ";
        for (int j = num; j <num+10; j++)
        {
            cout<<i*j<<" ";

        }
        cout<<endl;
    }
    
     
    return 0;
}