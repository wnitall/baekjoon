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
    int N, M;
    cin>>N>>M;
    vector<int>myvec;
    for (int i = 1;i<N+1;i++){
        myvec.push_back(i);
    }
    for (int i = 0;i<M;i++){
        int input1, input2;
        cin>>input1>>input2;
        reverse(myvec.begin() + input1-1, myvec.begin() + input2);
    }
    for (int i = 0;i<myvec.size();i++){
        cout<<myvec[i]<<" ";
    }
    cout<<endl;
}