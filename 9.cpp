//9. Find the absolute difference between the two numbers.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x,y,temp,i;
	while(i!=6){
	cout<<endl<<"Enter two digits: ";
	cin>>x>>y;
	if(x>y)
	temp=abs(x-y);
	else temp=abs(y-x);
	cout<<temp;
	i++;}
}