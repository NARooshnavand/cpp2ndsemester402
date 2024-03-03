#include<iostream>

using namespace std; 

int main(){
    char c=66, v='B';
    int n = 66;
    bool a = false;
    if(a){
        cout << " a is true";
    }else{
        cout << " a is not true";   
        a= true;
    }
    a? cout << " a is true" : cout << "a is not true";
    return 0;
}