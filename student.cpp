#include<iostream>
using namespace std;
class student
{
  private:
  const char* name;
  int age;
  int marks;
  public:
  student (char* n,int a,int m)
  {
      name=n;
      age=a;
      marks=m;
  }
  void display()
  {
      cout<<"\n Name: "<<name;
      cout<<"\n age: "<<age<<endl;
      cout<<"\n marks: "<<marks<<endl;
  }
};
int main()
{
    student s1("krishan Namdev",21,89);
    cout<<"Record of first student---------->"<<endl;
    s1.display();
    return 0;
}