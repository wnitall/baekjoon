#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cin>>a;
    if (100>=a && a>=90){cout<<"A"<<endl;}
    if (89>=a && a>=80){cout<<"B"<<endl;}
    if (79>=a && a>=70){cout<<"C"<<endl;}
    if (69>=a && a>=60){cout<<"D"<<endl;}
    if (59>=a && a>=0){cout<<"F"<<endl;}
}