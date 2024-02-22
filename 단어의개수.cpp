#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    int count = 0;
    string input;
    getline(cin, input);
    for (int i = 0;i<input.size();i++){
        if ((input[i] == ' ') && (i != 0) && (i != input.size()-1)){count += 1;}
    }
    if (input == " "){count = -1;}
    cout<<count+1<<endl;
}