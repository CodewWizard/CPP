#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 4; i++)
    // {
    //     if(i == 2){
    //         break;
    //     }
    //     cout<< i << endl;
    // }
    // cout<<"End of program and out of loop"<< endl;

    for (int i = 0; i < 6; i++)
    {
        if(i == 2){
            continue;
        }
        cout<< i << endl;
    }
    cout<<"End"<<endl;
    
    return 0;
}