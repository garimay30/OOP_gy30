//An HR application creates employee records temperorily while processing recruitment data. Design an Employee class that displays appropriate messages when employee records are created and automatically destroyed from memory after processing is completed.
#include <iostream>
using namespace std;
class employee
{
    public:
    int id;
    string name;
    int salary;
    employee(int i, string n, int s){
    id = i;
    name = n;
    salary = s;
    
    cout<<"EMPLOYEE CREATED"<<endl;
    }
    ~employee(){
        cout<<"EMPLOYEE DESTROYED"<<endl;
    }


};

int main()
{
    employee e1(6767 , "Aloo",67000);
    cout<<"Employee ID:"<<e1.id<<endl;
    cout<<"Employee Name:"<<e1.name<<endl;
    cout<<"Employee Salary:"<<e1.salary<<endl;
    return 0;

}
