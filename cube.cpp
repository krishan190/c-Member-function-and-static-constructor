#include<iostream>
using namespace std;
class cube
{
   public:
   double side;
   double volume()
   {
    return (side*side*side);
   }

   cube (double side1)
   {
    cout<<"\n constructor is called:"<<endl;
    side=side1;
   }
   cube()
   {
    cout<<"Default constructor is called:"<<endl;
   }
   ~cube()
   {
    cout<<"Destructing object:"<<side<<endl;
   }
};
int main()
{
   cube c1(5);
   cube c2;
   cout<<"the side of the cube is :"<<c1.side<<endl;
   cout<<"The volume of the cube is:"<<c1.volume()<<endl;
   cout<<"Enter the length of the second cube:";
   cin>>c2.side;
   cout<<"\n the volume of the second cube is:"<<c2.volume()<<endl;
   return 0;
}

// Output:
// constructor is called:
// Default constructor is called:
// the side of the cube is :5
// The volume of the cube is:125
// Enter the length of the second cube:4.5
// the volume of the second cube is:91.125
// Destructing object:4.5
// Destructing object:5
