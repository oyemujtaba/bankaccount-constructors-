#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
  public:
  BankAccount()
  {
    this->AccountHolder = "Syed Muhammad Mujtaba";
    this->AccountNumber = 4220189;
    this->CurrentBalance = 777777;
  };
  BankAccount(string AccHolder,int AccNumber,float CurrentBal)
  {
    this->AccountHolder = AccHolder;
    this->AccountNumber = AccNumber;
    this->CurrentBalance = CurrentBal;
  };
  BankAccount(BankAccount& cloneAcc)
  {
    this->AccountHolder = cloneAcc.AccountHolder;
    this->AccountNumber = cloneAcc.AccountNumber;
    this->CurrentBalance = cloneAcc.CurrentBalance;
  };
  void display()
  {
    cout<<this->AccountHolder<<endl<<this->AccountNumber<<endl<<this->CurrentBalance<<endl;
  };
  private:
  string AccountHolder;
  int AccountNumber;
  float CurrentBalance;
};