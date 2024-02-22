#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    int maxnum = 0, maxnumline;
    for (int i = 0;i<9;i++){
        int a; cin>>a;
        if (a>maxnum){maxnum = a; maxnumline = i + 1;}
    }
    cout<<maxnum<<endl<<maxnumline<<endl;
}   