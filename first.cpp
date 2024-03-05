#include<iostream>
#include "Account.h"
using namespace std;
int main(){
    Account account(7000);   
    cout << account.getBalance()<<endl; 
    account.balance = 10000;
    cout << account.getBalance()<<endl; 

    return 0;
}