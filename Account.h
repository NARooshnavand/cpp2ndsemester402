#include<iostream>
class Account{
    public:
    // Method , here is constructor 
    Account(int b){
        if(b> 5000)
            balance = b;
    }
    //Another method in c++ member function 
    int getBalance(){
        return balance;
    }
    int balance{5000};
    // private:
    // //Feild of class , in c++ member attribute
    //     int balance{5000};
};