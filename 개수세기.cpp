#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//

    int totalnum;
    vector<int>myvec;
    int objint;
    cin>>totalnum;
    for (int i = 0;i<totalnum;i++){
        int a;
        cin>>a;
        myvec.push_back(a);
    }
    cin>>objint;
    int count = 0;
    for (int i = 0;i<totalnum;i++){
        if (myvec[i] == objint){count += 1;}
    }
    cout<<count<<endl;
}