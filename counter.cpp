#include<iostream>
using namespace std;
// class counter
// {
//    private:
//    int count;
//    public:
//    counter()    //constructor
//    {
//     count=0;
//    }
//    void inc_count()
//    {
//     count++;
//    }
//    int get_count()
//    {
//     return count;
//    }
// };
class counter
{
  private:
  static int count;
  public:
  counter()
  {
      count++;
  }
  int get_count()
  {
    return count;
  }
};
int counter::count;

int main()
{
    counter c1,c2,c3;
    cout<<"No of times counter is called by constructor "<<c1.get_count();
    
    // counter c1;
    // cout<<"\n Before calling counter function, count=";
    // cout<<c1.get_count();
    // c1.inc_count();
    // cout<<"\n\n After calling counter function,count=";
    // cout<<c1.get_count();
    // cout<<"\n";
    return 0;
}