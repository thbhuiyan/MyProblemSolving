//Memorable problem of 2 day

#include<iostream>
using namespace std;
int main(){
    int i=0,t;
    cin>>t;
    while(i!=t){
    int x=0,n=0,k=0,count=0;
    cin>>n>>x>>k;
    while(k>=x && n!=0){
        k=k-x;
        count++;
        n--;
    }
    cout<<count<<endl;
        i++;
    }
    return 0;
}
