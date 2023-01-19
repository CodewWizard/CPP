#include<iostream>
using namespace std;

template<class T> void display(T x){
    cout<<x<<endl;
}

int main()
{
    display("Madiha");
    display('y');
    display(3.8);
    display(7);
}