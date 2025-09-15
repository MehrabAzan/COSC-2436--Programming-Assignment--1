#include "BankAccount.h"
#include <iostream>
#include <string>

using namespace std;

BankAccount::BankAccount(string n, double s, double c) {
    //creates the BankAccount object
    name = n;
    savings = s;
    checking = c;
}
//getter methods return the values from the variables
string BankAccount::GetName() {
    return name;
}

double BankAccount::GetSavings() {
    return savings;
}

double BankAccount::GetChecking() {
    return checking;
}
//setter methods set new values in the variables
void BankAccount::SetName(string n) {
    name = n;
}

void BankAccount::SetSavings(double amt) {
    savings = amt;
}

void BankAccount::SetChecking(double amt) {
    checking = amt;
}
//withdraw and deposit savings and checking amounts from the checking and savings variables
void BankAccount::WithdrawChecking(double amt) {
    checking = checking - amt;
}

void BankAccount::DepositChecking(double amt) {
    checking = checking + amt;
}

void BankAccount::WithdrawSavings(double amt) {
    savings = savings - amt;
}

void BankAccount::DepositSavings(double amt) {
    savings = savings + amt;
}
//subtracts the amount from the checking variable then adds it to the savings variable
void BankAccount::TransferToSavings(double amt) {
    checking = checking - amt;
    savings = savings + amt;
}