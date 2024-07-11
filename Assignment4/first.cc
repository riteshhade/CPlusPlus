#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    const int id;
    string name;
    mutable double salary;
    static string company_name;

public:
    Employee():id(1001),name("Ritesh"),salary(50000){}
    Employee(int empid,string ename,double esalary):id(empid),name(ename),salary(esalary){}
    ~Employee()
    {
        cout<<"Thank you for joining us!!!!!"<<endl;
    };

    void splitSalary(double base)
    {
        salary=base;
    }
    void printdetail()
    {
        cout<<"Employee id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee salary: "<<salary<<endl;
        cout<<"Company Name: "<<company_name<<endl;
        
    }
};
    string Employee::company_name="STARK INDUSTRIES.....";

int main()
{
    Employee e1;
    e1.printdetail();
    cout<<endl;
    Employee e2(1002,"Harsh",60000);
    e2.printdetail();
    cout<<endl;
    e2.splitSalary(80000);
    e2.printdetail();
}
