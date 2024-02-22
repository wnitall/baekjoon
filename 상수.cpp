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
    int input1, input2;
    cin>>input1>>input2;
    string string1 = to_string(input1);
    string string2 = to_string(input2);
    reverse(string1.begin(), string1.end());
    reverse(string2.begin(), string2.end());
    input1 = stoi(string1);
    input2 = stoi(string2);
    cout<<max(input1, input2)<<endl;
    return 0;
}