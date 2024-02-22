#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    
    int input;
    cin>>input;

    for (int i = 0;i<input;i++){
        for (int u = 0;u<input-i-1;u++){cout<<" ";}
        for (int k = 0;k<i+1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}