//3. Write a C program to check whether a number is negative, positive, or zero.
#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Set-up for 5 input testing purpose:\n";
    while(i!=5)
    {
        cout<<endl;
        cin>>n;
        if(n==0)
        {
            cout<<n<<" is zero!";
        }
        else if(n>0)
        {
            cout<<n<<" is positive!";
        }
        else
            cout<<n<<" is negative!";

        i++;
    }
}


