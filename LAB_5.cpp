#include <iostream>
#include <string>
#include "header.h"
using namespace std;



int main()
{
    BankAccount a(1598, "Semen", 1000, "Withdraw cash");
    BankAccount c(1527, "Oleh", 5300, "Withdraw cash");
    BankAccount d(1564, "Andrii", 4100, "Withdraw cash");
    BankAccount f(1530, "Max", 7500, "Withdraw cash");

    //a.showAccount();
    a.addbalance(10000);
    //a.showAccount();
    
    Bank b;
    b.BankAccountAdd(a);
    b.BankAccountAdd(c);
    b.BankAccountAdd(d);
    b.BankAccountAdd(f);
    //b.BankAccountAdd(a);
   
    //b.AccountDel(1598);
    //b.AccountDel(1564);
    b.SortByBalance();
    //b.showallAccounts();
   
   
}

