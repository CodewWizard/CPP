// Refers to current instance of class
// Usage of this pointer in cpp
// 1. Used to pass current object  as parameter to another method
// 2. Used to refer current class instance variable 
// 3. Used to declare indexers

#include<iostream>
using namespace std;

class Employee{
    public:
    int id, salary;
    string name;
    void setData(int id, string name, int salary){
        this->id = id;
        this->salary = salary;
        this->name = name;
    }
    void getData(){
        cout<<"Id of Employee is "<<id<<endl;
        cout<<"Salary of Employee is "<<salary<<endl;
        cout<<"Name of Employee is "<<name<<endl;
    }
};

int main(){
    Employee obj;
    obj.setData(25, "Madiha", 10000);
    obj.getData();
}