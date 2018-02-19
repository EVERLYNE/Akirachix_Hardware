/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
 { int a;
  int b;
  
  cout<<"enter the first number";
  cin>>a;
  cout<<"enter the second number";
  cin>>b;
  
  if (a>b){
      cout<<"first number is greater than second number";
      
      
  }
  else if(a==b) 
{
   
 cout<<"first number is equal to second number";
 
 
}
else{
    cout<<"second is greater than first";
    
}
    return 0;

}