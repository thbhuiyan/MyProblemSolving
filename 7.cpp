//7. Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 3 digit: ";
    cin>>x>>y>>z;
    if(x==y && y==z){
        cout<<"The Triangle is Equilateral!\n";
    }
        if(x==y && x!=z || y==z && y!=z || x==z && x!=y){
        cout<<"The Triangle is Isosceles!\n";
    }
        if(x!=y && x!=z && y!=z){
        cout<<"The Triangle is Scalene!\n";
    }
}
