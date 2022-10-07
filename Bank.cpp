#include<iostream>
using namespace std;
class Bank
{
  private:
  int p,t;
  float roi;
  float SI;
  public:
  Bank(int x,float y,int z)
  {
     p=x;
     roi=y;
     t=z;
  }
  void calc_si()
  {
    float si;
    si=(p*roi*t)/100;
    SI=si;
  }
  void display()
  {
    cout<<"Simple Interest is  "<<SI<<endl;
  }
};                   
int main()
{
    Bank b1(5000,5,2);
    b1.calc_si();
    b1.display();
    return 0;
}