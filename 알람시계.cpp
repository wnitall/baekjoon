#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    int count;
    cin>>a>>b;
    cin>>c;
    count = (b+c)/60;
    if (a+count >= 24){
        cout<<a+count-24<<" "<<b+c-60*count<<endl;
    }else{cout<<a+count<<" "<<b+c-60*count<<endl;}
}