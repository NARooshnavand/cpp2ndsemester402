#include<iostream>

using namespace std; 
int sum(int a, int b){
    return a+b;
}
float sum(float a, float b){
    return a+b;
}
int main(){
    char c{66}, v{'B'};
    int m{54}, n;
    float f1{1.2}, f2{54.3};
    double d1;
    n = 62;
    d1 = 1.321e34;
    double d2 = 4.25e12,d3;
    d3 = d1/d2;
    cout << d3;
    return 0;
}