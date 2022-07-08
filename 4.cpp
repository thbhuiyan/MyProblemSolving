//4. Write a C program to check whether a given integer is odd or even.
#include<iostream>
using namespace std;
int main()
{
    int x,i=0;
    while(i!=5)
    {
        cout<<endl<<"Enter a digit: ";
        cin>>x;
        if(x%2==0)
            cout<<x<<" is an EVEN integer"<<endl;
        else
            cout<<x<<" is an ODD integer"<<endl;
        i++;
    }
}

