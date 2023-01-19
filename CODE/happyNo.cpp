#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num, rem, sum = 0, temp;
    cout<<"Enter no "<<endl;
    cin>>num;
    temp = num;

    while (sum != 1)
    {
        while (2)
        {
        
            rem = num % 10;    //
            sum += rem * rem;   
            num /= 10;    //
            num = sum;  //
            
        }
    }
    if(sum == 1)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;    

    return 0;
}