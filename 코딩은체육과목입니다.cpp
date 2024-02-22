#include<iostream>
#include<string>
using namespace std;
int main(){
    int input;
    int longiter;
    cin>>input;
    longiter = input/4;
    for (int i = 0;i<longiter;i++){
        cout<<"long"<<" ";
    }
    cout<<"int"<<endl;
}