#include<iostream>
#include<string>
using namespace std;

int sum(int n){
    if (n == 1){return 1;}
    if (n == 0){return 0;}
    else{return n + sum(n-1);}
}
int main(){
    int input;
    cin>>input;
    cout<<sum(input)<<endl;
}