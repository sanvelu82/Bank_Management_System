#include<iostream.h>
#include<conio.h>
class bank{
  public:
    long int ac_no;
    char name[30];
  void get_ac(){
    cout<<"\nEnter Your Account Number : ";
    cin>>ac_no;
    cout<<"\nEnter the Account Holder Name : ";
    cin>>name;
  }
};
class deposit:public bank{
  public:
    int dp_am;
    void dep(){
      cout<<"\nEnter the Amount to deposit : $";
      cin>>dp_am;
  }
};
class withdraw:public bank{
  public:
    int with_am;
    void with(){
      cout<<"\nEnter your Withdraw Amount : $";
      cin>>with_am;
  }
};
int main(){
  clrscr();
  long int a,balance,exit,i;
  bank b;
  deposit d;
  withdraw w;
  cout<<"\n\t\t\t\t BANK MANAGEMENT\n";
  b.get_ac();
  cout<<"\nEnter Your Account Balance : $";
  cin>>balance;
  i=0;
  while (i<1){
    cout<<"\nSelect your Transaction Type : ";
    cout<<"\n\n1 - Deposit"<<"\t\t2 - Withdraw\t\t\t";cin>>a;
      switch(a){
        case 1:{
          d.dep();
          balance=balance+d.dp_am;
          cout<<"\nCash Deposit Successfully\n";cout<<"\nYour Bank Balance : $"<<balance;
          break;
        }
        case 2:{
          w.with();
          if (balance>=w.with_am){
            balance=balance-w.with_am;
            cout<<"\nCollect Your Cash\n";
            cout<<"\nYour Bank Balance : $"<<balance;
            }
          else{
            cout<<"\nInsufficient Balance";
            cout<<"\n\nYour Account Balance only : $"<<balance;
            }
          break;
        }
        default :{
        cout<<"\nInvalid Transaction Type\n";
        }
    }
  cout<<"\n\nWould you want to continue your Transaction : ";cout<<"\n\n0 - Yes"<<"\t\t1 - No\t\t\t";
  cin>>i;
  if (i==0){
    i=0;
    cout<<"\n------------------------------------------------------------------------------\n";
  }
  else{
    cout<<"\nEnter Any Key to Exit : ";
    cin>>exit;
    break;
    }
  }
  return 0;
}





