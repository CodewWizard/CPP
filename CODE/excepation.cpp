#include<iostream>
using namespace std;

int main(){
    try
    {
        cout<<"In try"<<endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}