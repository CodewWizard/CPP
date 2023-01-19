//Must for Competitive  programming
// also called as parameterized class 

#include<iostream>
using namespace std;

template<class Tee>
class Temp{   
  public:
    Tee a;
    Temp(Tee x){
      a = x;
    }

    void display(){
      cout<<"a is "<<a<<endl;
    }
};

int main(){
  Temp<int> ob('h');
  ob.display();
}




































