#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cin>>a;
    if ((a%4 == 0 && a%100 != 0) or a%400 == 0){
        cout<<1<<endl;
    }else{cout<<0<<endl;}
}