#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i=0,x,y,T;
    cin>>T;
    while(i!=T)
    {
        cin>>x>>y;
        cout<<abs(x-y)<<"\n";
        i++;
    }
    return 0;
}
