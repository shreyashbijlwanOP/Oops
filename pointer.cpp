#include <iostream>
using namespace std;
// program for the radius of circle
// rectanlge Class
class Rectangle
{
   // Data Members
   int l;
   int b;

//  member Function
public:
// Setters
   void setLength(int x)
   {
      l = x;
   }
   void setBreath(int y)
   {
      b = y;
   }
   // Getters
   int getLength() { return l; }
   int getBreath() { return b; }

   // Methods Of Rectangle
   int area()
   {
      return getBreath() * getLength();
   }
   int perimeter()
   {
      return 2 * (getBreath() + getLength());
   }
};

int main()
{
   // object of rectanlge 
   Rectangle r;      // inside Stack 
   Rectangle *r2 = new Rectangle;   //inside Heap 
   r2->setBreath(10);
   r2->setLength(5);
    
   r.setBreath(12);
   r.setLength(10);
   cout<<r.area()<<endl<<r.perimeter()<<endl;
   cout<<"object Using Pointer "<<endl;
   cout<<r2->area()<<endl<<(*r2).perimeter();

}
