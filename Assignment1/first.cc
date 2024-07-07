# include<iostream>
using namespace std;
int main(){
int num,bitpos;
cout<<"Enter a number: ";
cin>>num;
cout<<"Enter bitpos to toggle: ";
cin>>bitpos;

num^=(1<<bitpos);
cout<<"Number after toggling bit at position "<<bitpos<<":"<<num<<endl; 

return 0;
}
