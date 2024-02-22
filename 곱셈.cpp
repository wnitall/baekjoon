#include<iostream>
#include<string>
using namespace std;
int main(){
    int num1, num2;
    cin>>num1;
    cin>>num2;
    cout<<num1*(num2%10)<<endl;
    cout<<num1*((num2-num2%10)%100)/10<<endl;
    cout<<num1*(num2/100)<<endl;
    cout<<num1*(num2%10) + num1*((num2-num2%10)%100) + num1*(num2/100)*100<<endl;
}