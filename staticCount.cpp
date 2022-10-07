#include<iostream>
using namespace std;
class StaticCount
{
  private:
  static int count;
  public:
  StaticCount()
  {
      count++;
  }
  int get_count()
  {
      return count;
  }
};
int StaticCount::count;
int main()
{
    StaticCount s1,s2,s3;
    cout<<"No of times static count variable is called: "<<s1.get_count();
    return 0;
}