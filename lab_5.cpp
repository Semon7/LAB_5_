#include <iostream>
#include <string>
#include "header.h"
using namespace std;



int main()
{
    BankAccount semen_acc(1598, "Semen", 1000, "Withdraw cash");
    BankAccount oleh_acc(1527, "Oleh", 5300, "Withdraw cash");
    BankAccount andrii_acc(1564, "Andrii", 4100, "Withdraw cash");
    BankAccount max_acc(1530, "Max", 7500, "Withdraw cash");

    
    semen_acc.addbalance(10000);
    
    
    Bank acc;
    acc.BankAccountAdd(semen_acc);
    acc.BankAccountAdd(oleh_acc);
    acc.BankAccountAdd(andrii_acc);
    acc.BankAccountAdd(max_acc);
    acc.BankAccountAdd(semen_acc);
    acc.AccountDel(1598);
   
    b.SortByBalance();
    
   
   
}

