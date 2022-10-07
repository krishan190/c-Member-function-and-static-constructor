#include<iostream>
using namespace std;
class Date
{
  private:
  int date,month,year;
  public:
  Date()
  {
      date=07;
      month=10;
      year=2022;
      cout<<"\n Date object has been created:"<<endl;
  }
  void display()
  {
      cout<<"\n The entered date is:"<<endl;
      cout<<date<<"/"<<month<<"/"<<year<<endl;
  }
};
int main()
{
    Date d1;
    d1.display();
    return 0;
}