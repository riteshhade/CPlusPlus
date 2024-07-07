#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
			int i;
			for (i=2;i<num ;i++ )
			{
				if (num%i==0)
				{
					break;
				}
			}
			if (i==num)
			{
				cout<<" It is a prime number.";
			}
			else
			{
				cout<<"It is not a prime number";
			}
		}
	
    
