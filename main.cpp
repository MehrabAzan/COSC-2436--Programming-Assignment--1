#include "BankAccount.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    //Creates the object
    BankAccount temp("Mehrab", 100000.0, 1000.0);
    //Tests the GetName(), GetSavings(), and GetChecking() method
    cout << "Account for: " << temp.GetName() << endl;
    cout << "Savings: $" << temp.GetSavings() << endl << "Checking: $" << temp.GetChecking() << endl << endl;
    //Tests DepositChecking()
    temp.DepositChecking(200);
    cout << "After depositing $200 into checking: " << temp.GetChecking() << endl;
    //Tests WithdrawChecking()
    temp.WithdrawChecking(100);
    cout << "After withdrawing $100 from checking: " << temp.GetChecking() << endl;
    //Tests DepositSavings()
    temp.DepositSavings(300);
    cout << "After depositing $300 into savings: " << temp.GetSavings() << endl;
    //Tests WithdrawSavings()
    temp.WithdrawSavings(150);
    cout << "After withdrawing $150 from savings: " << temp.GetSavings() << endl;
    //Tests TransferToSavings()
    temp.TransferToSavings(200);
    cout << "After transferring $200 from checking to savings:" << endl;
    cout << "Checking: " << temp.GetChecking() << ", Savings: " << temp.GetSavings() << endl;

    return 0;
}