#include<iostream>
#include<string>
using namespace std;
#include "BankAccount.h"
int main()
{
  BankAccount MujAcc;
  MujAcc.display();
  cout<<endl;
  BankAccount rafayAcc("rafay shaikh" , 1451 , 8767.76);
  rafayAcc.display();
  cout<<endl;
  BankAccount farazAcc(MujAcc);
  farazAcc.display();
  system("pause");
}