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
private:
unsigned total_car;
double amount_of_money;
double total_loss;
};
int main(int argc, char const *argv[])
{

  return 0;
}
