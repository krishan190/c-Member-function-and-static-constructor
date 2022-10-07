#include<iostream>
using namespace std;
class Box
{
  private:
  int l,b,h;
  int v;
  public:
  Box(int x,int y,int z)
  {
     l=x;
     b=y;
     h=z;
  }
  void calc_volume()
  {
    int vol;
    vol=l*b*h;
    v=vol;
  }
  void display()
  {
    cout<<"volume of box "<<v<<endl;
  }
};                   
int main()
{
    Box b1(6,4,3);
    b1.calc_volume();
    b1.display();
    return 0;
}