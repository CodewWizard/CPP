#include<iostream>
using namespace std;

class Solution {
public:
    int isPalindrome(int x) {
        int rem, temp = x, sum;
        while(x>0){
            rem = x % 10;
            sum = (sum * 10) + rem;
            x = x / 10;
        }
        cout<<sum<<endl;
        cout<<temp<<endl;
    if(sum == temp)
        cout<<"Number is palindrome"<<endl;
    else
        cout<<"Number is not palindrome"<<endl;
    }
};

int main(){
    int res;
    int x = 141;
    Solution obj;
    res = obj.isPalindrome(x);
    return 0;
}