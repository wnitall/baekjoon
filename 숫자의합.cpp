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
    string mystr;
    int totalsum = 0;
    cin>>input;
    cin>>mystr;
    for (int i = 0;i<input;i++){
        totalsum += mystr[i] - '0';
    }
    cout<<totalsum<<endl;
}