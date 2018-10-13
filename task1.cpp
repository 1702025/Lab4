#include <iostream>
using namespace std;
class TollBooth
{
public:
  TollBooth(int car,double money,double loss)
  {
    total_car=car;
    amount_of_money=money;
    total_loss=loss;
  }
   void payingcar()
   {
      amount_of_money=amount_of_money+150.50;
      total_car++;
   }
   void nopaycar()
   {
     total_loss=total_loss+150.50;
     total_car++;
   }
   void display()
   {
     cout<<"total amount of money = "<<amount_of_money<<endl;
     cout<<"total loss = "<<total_loss<<endl;
     cout<<"total cars = "<<total_car<<endl;
   }

private:
  unsigned total_car;
  double amount_of_money;
  double total_loss;
};
int main(int argc, char const *argv[])
{
  TollBooth a(0,0,0);
  for(int i=0;i<5000;i++)
  {
  char var;
  cout<<"p for paying car, n for non- paying car , q for quit "<<endl;
  cin >>var;
  if(var=='P' || var=='p')
  {
    a.payingcar();
  }
  else if(var=='N' || var=='n')
  {
    a.nopaycar();
  }
  else if(var=='Q' || var=='q')
  {
    return 0;
  }
  else
  {
    cout<<"invalid input";
    break;
  }
  a.display();
  }
  return 0;
}
