#include<iostream>
using namespace std;

class Emp{
    int id;
    static int count;
    public:
    void set(){
        cout<<"Enter id"<<endl;
        cin>>id;
        count++;
    }
    void get(){
        cout<<"Id is "<<id<<endl;
    }
    static void getCnt(){
        // cout<<id; this will throw an error
        cout<<"Count is "<<count<<endl;
    }
};

int Emp::count;

int main(){
    Emp obj1, obj2;
    obj1.set();
    obj1.get();
    obj1.getCnt(); //call as like also

    obj2.set();
    obj2.get();
    Emp::getCnt();

    return 0;

}