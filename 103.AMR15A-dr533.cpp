#include <iostream>
using namespace std;
int main()
{
    int w,z,y,i,s;
    w=z=y=i=s=0;
    cin>>s;
    while(i!=s)
    {
        cin>>w;
        if(w%2==0)
            y++;
        else
            z++;
        i++;
    }
    if(y>z)
        cout<<"READY FOR BATTLE";
    else
        cout<<"NOT READY";
    return 0;
}
