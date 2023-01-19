#include<iostream>
using namespace std;

class Emp{
    int id;
    static int count;
        public:
        void setData(){
            cout<<"Enter id "<<endl;
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"Id is "<<id<<endl<<"Count is "<<count<<endl;
        }
};
int Emp :: count;  //by default initializes to 0 | must declare outside the class

int main(){
    Emp ob1, ob2;
    ob1.setData();
    ob1.getData();

    ob2.setData();
    ob2.getData();
    return 0;
}