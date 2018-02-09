/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
string str;
    int length;
    bool isPalindrome = true;
 
    cout << "Enter a word: ";
 
    getline(cin, str);
 
    length = str.length();
 
    for (int i = 0; i < (length / 2); i++)
    {
        if (str[i] != str[(length - 1) - i])
            isPalindrome = false;
    }
 
    if (isPalindrome == true)
        cout << str << " is a palindrome" << endl;
 
    else
        cout << str << " is not a palindrome" << endl;
 
//new text begins here

    return 0;
}
