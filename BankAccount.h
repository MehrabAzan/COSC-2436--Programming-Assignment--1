#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>
#include <iostream>

using namespace std;

class BankAccount {
    private:
        //set private variables
        string name;
        double savings;
        double checking;
    public:
        //constructor
        BankAccount(string n, double s, double c);
        //getter methods
        string GetName();
        double GetSavings();
        double GetChecking();
        //setter methods
        void SetName(string n);
        void SetSavings(double amt);
        void SetChecking(double amt);
        //withdraw and deposit amounts from checking and savings account
        void WithdrawChecking(double amt);
        void DepositChecking(double amt);
        void WithdrawSavings(double amt);
        void DepositSavings(double amt);
        //transfer from checking account to savings
        void TransferToSavings(double amt);
};

#endif