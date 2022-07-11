//10. A bus can carry maximum K person at a time. How many buses are needed to carry N person?
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i=0;
    double n,c,temp;
    while(i!=6)
    {
        cout<<"Enter number of person: ";
        cin>>n;
        cout<<"Enter number of person bus can carry: ";
        cin>>c;
        temp=ceil((n/c));
        cout<<temp<<"\n\n";
        i++;
    }
    return 0;
}
