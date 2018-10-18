#include <iostream>
#include<vector>
using namespace std;
 class stack
 {
 private:
   vector<string>count;
 public:
   bool stack_empty()
   {
       return count.empty();
   }
   void stack_push( string str)
   {
       count.push_back(str);
   }
   string stack_top()
   {
     return count.back();
   }
   void stack_pop()
   {
     count.pop_back();
   }
};
int main()
{
  stack a;
  string str;
  char var;
while(1)
  {

    cout<<"\npres the 'a' add item to the stack.......\npress the 'r' removes the most-recetnly added item\n";
    cin>>var;
   if(var=='e' || var=='E')
   {
    cout<<a.stack_empty();
   }
   if (var=='a' || var=='A')
   {
       cout<<"enter the string = ";
       cin>>str;
       a.stack_push(str);
   }
   else if (var=='r' || var=='R')
   {
      a.stack_pop();
   }
   else if (var=='q' || var=='Q')
   {
    break;
   }
   cout<<a.stack_top();
  }
  return 0;
}
