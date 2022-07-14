#include<iostream>
using namespace std;
int main()
{
    int i=0,x,y,T;
    cin>>T;
    while(i!=T)
    {
        cin>>x>>y;
        if(x<y){
            cout<<"first\n";
        }
        else if(x>y){
            cout<<"second\n";
        }
        else
            cout<<"any\n";
        i++;
    }
    return 0;
}
