#include<iostream>
using namespace std; 

int main(){
     int day,month,year;
     cout<<"Enter the date: "<<endl;
     cin>>day;

     cout<<"Enter the month: "<<endl;
     cin>>month;

     cout<<"Enter the year: "<<endl;
     cin>>year;

     if (month<3)
     {
        month+=12;
        year--;
     }
     
     int q= day;
     int m= month;
     int k=year%100;
     int j=year/100;

     int h=(q+(13*(m+1))/5+k+k/4+j/4+5*j)%7;

     switch (h)
     {
     case 0:
        cout<<"Saturday"<<endl;
        break;
     
     case 1:
        cout<<"Sunday"<<endl;
        break;
     
     case 2:
        cout<<"Monday"<<endl;
        break;
     
     case 3:
        cout<<"Tuesday"<<endl;
        break;
     
     case 4:
        cout<<"Wednesday"<<endl;
        break;

     case 5:
        cout<<"Thusday"<<endl;
        break;

     case 6:
        cout<<"friday"<<endl;
        break;
     


     default:
        cout<<"Invalid Input"<<endl;
        break;
     }

     return 0;
}