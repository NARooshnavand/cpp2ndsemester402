#include<iostream>
#include<string>
#include "Account.h"
using namespace std;
int main(){
    Account account(7000);   
    cout << account.getBalance()<<endl; 
    account.setBalance(10000);
    cout << account.getBalance()<<endl; 
    string name;
    getline(cin,name);
    // cin >> name;
    account.setName(name);
    cout << account.getName()<<endl; 
    return 0;
}