/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int addition(int x,int y){int z=x+y;
return z;
}

int main()
{
    int a;
    int b;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    cout<<a;cout<<" + ";cout<<b;cout<<" = ";cout<< addition(a,b);

    return 0;
}


