#include<iostream>
using namespace std;

class Box
{
    double length;
    double height;
    double width;
    double getVolume(void);


};
int main()

{
    double volume;
    Box box1;
    box1.height=5;
    box1.width=6;
    box1.length=7;
    double Box::getVolume(void)
    {
      return box1.height * box1.length * box1.width;
    }

   volume=Box.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}
