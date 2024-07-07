#include<iostream>
using namespace std;

bool isPrime(int number)
{
	if (number<=1)
	{
		return false;
	}
	for (int  i = 2; i *i<=number ; i++)
	{
		if (number%i==0)
		{
			return false;
		}
		
	}
	
	return true;
}

int main()
{
	int count=0;
	int num;
	cout<<"Enter the number to start: ";
	cin>>num;

	cout<<"First 100 prime numbers from given input: ";
	while (count<100)
	{
		if (isPrime(num))
		{
			cout<<num<<" ";
			count++;
		}
		num++;
	}
	cout<<endl;

	return 0;
	
}