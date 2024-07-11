#include<iostream>
#include<string>
using namespace std; 

class Employee
{
private:
    const int id;
    string*name;
    mutable double salary;
    static string company_name;
public:
    Employee():id(101),name(nullptr),salary(10000){};
    Employee(int id,string name,double salary):id(id),salary(salary)
    {
        this->name=new string(name);
    }
    ~Employee()
    {
        cout<<"Its get call"<<endl;
        delete name;
    }
    void splitSalary(double base)
    {
        salary = base;
    }
    void printdetail()
    {
        cout<<"Employee id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee salary: "<<salary<<endl;
        cout<<"Employee Company Name: "<<company_name<<endl;
    }
};
    string Employee::company_name="STARK INDUSTRIES......";


int main(){
     
    Employee e1;
    e1.printdetail();
    cout<<endl; 

    Employee e2(102,"Harsh",7500);
    e2.printdetail();
    cout<<endl; 

    e2.splitSalary(10000);
    e2.printdetail();

     return 0;
}