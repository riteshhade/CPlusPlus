# include<iostream>
using namespace std;

int main()
{
    int num,bitpos;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the position: ";
    cin>>bitpos;

    int nibbleIndex = (bitpos-1)/4;

    int mask=0xF<<(nibbleIndex*4);
    num^=mask;
    cout<<"number after toggling all four bits in the nibble: "<<num<<endl;
    return 0;
}