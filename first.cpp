#include<iostream>

using namespace std; 
int sum(int a, int b){
    return a+b;
}
float sum(float a, float b){
    return a+b;
}
int main(){
    char c=66, v='B';
    int m = 54, n = 66;
    float f1 = 31.2, f2 = 54.3;
    cout <<"sum of m, v : " <<sum(m,v) <<endl <<"sum f1,f2: " << sum(f1, f2);   
    return 0;
}