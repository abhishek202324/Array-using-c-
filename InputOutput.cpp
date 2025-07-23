#include<iostream>
#include<string>
using namespace std;
// This file is used for input and output operations in C++

int main()
{
    string st;
    cout<<"Enter single word string without space: ";

    cin>>st;
    cout<<"The entered string without space is : "<<st<<endl;
     cin.ignore();
    string str;
    cout<<"Now you can enter the string with space too: ";
    getline(cin,str);
    cout<<"Your entered string is with space is this: "<<str<<endl;
    
    

   return 0;

}