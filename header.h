#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:


    string owner_name;
    string replenish_balance;
    string withdraw_cash;

public:

    int balance_of_acc;
    int id_of_acc;
    double amoumt;
    int amount;
    
    int get_id()
    {
        return id_of_acc;
    }

    string get_owner_name()
    {
        return owner_name;
    }

    int get_balance()
    {
        return balance_of_acc;
    }

    string get_replenish_balance()
    {
        return replenish_balance;
    }

    string get_withdraw_cash()
    {
        return withdraw_cash;
    }


    BankAccount()
    {
    }

    BankAccount(int id_of_acc, string owner_name, int balance_of_acc, string  withdraw_cash)
    {
        this->id_of_acc = id_of_acc;
        this->owner_name = owner_name;
        this->balance_of_acc = balance_of_acc;
        this->withdraw_cash = withdraw_cash;
    }



    void add_balance(int amount)
    {
        balance_of_acc += amount;
    }

    void show_account()
    {
        cout << "_________Your Bank Account_________" << "\n\n    ID: " << id_of_acc << "\n    Owner Name: " << owner_name << "\n    Balance: " << balance_of_acc << "\n    Withdraw cash " << endl << endl;

    }
};

class Bank
{
public:
    int number = 0;
    BankAccount ArrayBankAccount[99];
    BankAccount SortArray[1];

    void BankAccountAdd(BankAccount BankAccount_)
    {
        ArrayBankAccount[number] = BankAccount_;
        number++;
    }

    void ShowAllAccounts()
    {
        for (int i = 0; i < number; i++)
        {
            ArrayBankAccount[i].show_account();
        }

    }

    void AccountDel(int AccountID)
    {
        for (int t = 0; t < number; t++)
        {
            if (ArrayBankAccount[t].id_of_acc == AccountID)
            {
                for (int p = 0; p < number; p++)
                {
                    ArrayBankAccount[t] = ArrayBankAccount[t + 1];
                    t++;
                }
                number--;
                break;
            }
        }
    }

    void AddArray(BankAccount nombre)
    {
        ArrayBankAccount[number] = nombre;
        number++;
    }

    void SortByBalance()
    {
        for (int i = 1; i < number; i++)
        {
            for (int j = 1; j < number; j++)
            {
                if (ArrayBankAccount[j].balance_of_acc > ArrayBankAccount[j - 1].balance_of_acc)
                {
                    SortArray[0] = ArrayBankAccount[j];
                    ArrayBankAccount[j] = ArrayBankAccount[j - 1];
                    ArrayBankAccount[j - 1] = SortArray[0];
                }
            }


        }

        for (int i = 0; i < number; i++)
        {
            ArrayBankAccount[i].show_account();
        }
    }

};
