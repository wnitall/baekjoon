#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if (a==b && b==c){cout<<10000+a*1000<<endl;}
    if (a==b && b!=c){cout<<1000+a*100<<endl;}
    if (b==c && a!=c){cout<<1000+b*100<<endl;}
    if (a==c && b!=c){cout<<1000+a*100<<endl;}
    if (a!=b && b!=c && a!=c){cout<<max(max(a,b), max(b,c))*100<<endl;}
}