#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    set<int>myset;
    for (int i = 0; i<10;i++){
        int input;
        cin>>input;
        myset.insert(input%42);
    }
    cout<<myset.size()<<endl;
}