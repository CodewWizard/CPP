#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' || ch <= 'z' || ch >= '0' || ch <= '9'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

void swap(int a, int b, char name[]){
    int temp;
    temp = name[a];
    name[a] = name[b];
    name[b] = temp; 
}

void reverse(char name[], int len){
    int s = 0;
    int e = len - 1;
    while (s < e)
    {
        swap(s++, e--, name);
    }
}

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

bool check(char name[], int len){
    char temp[200];
    for (int i = 0; i < len; i++)
    {
        if(valid(name[i])){
            temp[i] = name[i];
        }
    }

    //converting to lower case
    for (int i = 0; temp[i] != '\0'; i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }
    return isPalindrome(temp, len);
    
}

int isPalindrome(char name[], int len){
    int s = 0;
    int e = len - 1;
    while (s <= e)
    {
        if(valid(name[s])){
            if(toLowerCase(name[s]) != toLowerCase(name[e])){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
    }
    return 1;
}

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "Enter name ";
    cin >> name;
    // cout << name << endl;
    int length = getLength(name); 
    // reverse(name, length);
    int res = isPalindrome(name, length);
    if(res == 0){
        cout << name << " is not palindrome ";
    }
    else{
        cout<<name <<" is palindrome" <<endl;
    }
    // cout<<name;a
    cout << toLowerCase('Q') << endl;
    cout << toLowerCase('z');
}

