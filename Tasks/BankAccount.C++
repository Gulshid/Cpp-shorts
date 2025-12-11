// *** Bank Account Management System ***
#include<iostream>
using namespace std;
class BankAccount
{
    private:
    string holdername;
    int AccountNo;
    double balance;

    public:
    // Constructor 
    BankAccount(string name, int accno, double bal)
    {
        holdername = name;
        AccountNo = accno;
        balance = bal;
    }

    // display the Account Detail
    void display()
    {
        cout<<"**** Bank Account Details ****"<<endl;
        cout<<"Account Holder Name :"<<holdername<<endl;
        cout<<"Account No :"<<AccountNo<<endl;
        cout<<"Current Balance Rs:"<<balance<<"/-"<<endl;
        cout<<"****************************"<<endl;
    }

    // deposite 
    void deposite(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout<<"The Amount is Successfully Deposited on your Account Rs:"<<amount<<"/-"<<endl;
            cout<<"Current Balance Rs:"<<balance<<"/-"<<endl;
        }

        else
        {
            cout<<"The Amount is Invalid because you amount is less than 1 Rs:"<<amount<<"/-"<<endl;        
        }
    }

    // withdrawal
    void withdrawal(double amount)
    {
        if(amount <= balance && amount > 0)
        {
            balance -= amount;
            cout<<"The Amount is Successfully Withdraw on your Account :"<<endl;
            cout<<"Rs:"<<amount<<"/-"<<endl;
            cout<<"Current Balance Rs:"<<balance<<"/-"<<endl;
        }
        else
        {
            cout<<"The Amount is Insufficient Rs:"<<amount<<"/-"<<endl;
            cout<<"Current Balance Rs:"<<balance<<"/-"<<endl;
        }
    }
};


int main()
{
    string name;
    int accNo;
    double balance;
    cout<<"Enter the Account Holder name :";
    getline(cin, name);

    cout<<"Enter the Account NUmber :";
    cin>>accNo;

    cout<<"Enter the Initial Balance :";
    cin>>balance;

    BankAccount bank(name, accNo, balance);
    bank.display();

    cout<<"*** Deposite ***"<<endl;
    double deposite_amount, Withdraw_amount;
    cout<<"Enter the Deposite amount :";
    cin>>deposite_amount;
    bank.deposite(deposite_amount);
    cout<<"*****************"<<endl;

    cout<<"*** Withdrawal ***"<<endl;
    cout<<"Enter the Withdrawal Amount :";
    cin>>Withdraw_amount;
    bank.withdrawal(Withdraw_amount);
    cout<<"*****************"<<endl;

}