//Write a C program to check whether
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n digit: ";
    cin>>n;


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
