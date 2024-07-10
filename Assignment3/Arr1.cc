#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int j;
    cout << "Enter First Element of an array : ";
    cin >> arr[0];
    for(int i = 0; i<100; i++)
    {
        arr[i] = arr[0]+i;
        cout << arr[i] << " " ;
    }

    return 0;
    
}