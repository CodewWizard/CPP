#include<iostream>
using namespace std;

void display(double x){
    cout<<x<<endl;
}
void display(int x){
    if(x % 2 == 0){
        cout<<"x is even "<<x<<endl;
    }
    else{
        cout<<"x is odd "<<x<<endl;
    }
}

int main(){
    display(8.4);
    display(7);
}