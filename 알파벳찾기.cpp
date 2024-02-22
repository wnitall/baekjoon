#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    string input;
    cin>>input;
    for (int i = 0;i<26;i++){
        char input2 = 97 + i;
        size_t found = input.find(input2);
        if (found != string::npos){cout<<found<<" ";}
        if (found == string::npos){cout<<"-1"<<" ";}
    }
    cout<<endl;
}