// structure of CPP | Structure Class

#include<iostream>
using namespace std;
class A                      //A is the class name
{
   public:
   void fun()
   {                //function definition
    cout<<"Class Executed";
   }
   
};
int main(){
    A a;            // a is the object
    a.fun();        // call the function in inside of the class help of object
}