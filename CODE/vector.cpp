#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &vec){
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main(){
     
    // vector<int> vec;
    // int element, size;
    // cout<<"Enter the size of vector ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter element ";
    //     cin>>element;
    //     vec.push_back(element);
    // }
    // display(vec);
    // vec.pop_back();
    // display(vec);

    // vector<char> vec2;
    // vec2.push_back('m');
    // vec2.push_back('a');
    // vec2.push_back('d');
    // vec2.push_back('i');
    // vec2.push_back('h');
    // vec2.push_back('a');
    // for (int i = 0; i < vec2.size(); i++)
    // {
    //     cout<<vec2[i];
    // }
    // vector<int> vec3;
    // vec3.push_back(2);
    // vec3.push_back(4);
    // vec3.push_back(7);

    // vector<int> :: iterator iter = vec3.begin();
    // vec3.insert(iter, 35);
    // vec3.insert(iter + 2, 36);
    // display(vec3);

    // vector<int> vec4(vec3);
    // display(vec4);

    // vector<int> vec5(5, 25);
    // display(vec5);

    // vector<int> vec6;
    // vec6.push_back(1);
    // vec6.push_back(2);
    // vec6.push_back(3);
    // vec6.push_back(4);

    // vector<int> :: iterator iter1 = vec6.end();
    // vec6.insert(iter1, 5);
    // display(vec6);

    vector<int> vec7;
    vec7.push_back(1);
    vec7.push_back(2);
    vec7.push_back(3);
    vec7.push_back(4);

    vector<int> :: iterator iter2 = vec7.begin();
    vec7.insert(iter2, 5);
    display(vec7);

}
