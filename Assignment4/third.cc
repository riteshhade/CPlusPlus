#include<iostream>
using namespace std; 

class Number
{
private:
    int num;
public:
    Number():num(0){}
    Number(int  num =0)
    {
        this->num=num;
    }
    Number operator+(const Number &rhs)
    {
        return Number(num+rhs.num);
    }
    Number operator-(const Number &rhs)
    {
        return Number(num-rhs.num);
    }
    Number& operator++()
    {
        ++num;
        return*this;
    }
    Number operator++(int)
    {
        return Number(num++);
    }
    void display()
    {
        cout<<"Number: "<<num<<endl;
    }
};



int main(){
    Number a=10;
    a.display(); 
    cout<<endl;
    Number b =20;
    b.display();
    cout<<endl;
    Number c =a+b;
    c.display();
    cout<<endl;
    Number d=c-a;
    d.display();
    Number e=++a;
    e.display();
    Number f=a++;
    f.display();
    return 0;
}