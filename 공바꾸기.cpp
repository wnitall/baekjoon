#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    int totalnum, totalchange;
    cin>>totalnum>>totalchange;
    vector<int>myvec;
    for (int i = 0;i<totalnum;i++){
        myvec.push_back(i+1);
    }
    for (int i = 0;i<totalchange;i++){
        int num1, num2, temp;
        cin>>num1>>num2;
        temp = myvec[num1-1];
        myvec[num1-1] = myvec[num2-1];
        myvec[num2-1] = temp;
    }
    for (int i = 0;i<myvec.size();i++){
        cout<<myvec[i]<<" ";
    }
    cout<<endl;
}