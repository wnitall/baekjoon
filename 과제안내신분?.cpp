#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    vector <int> myvec;
    for (int i = 0;i<28;i++){
        int input;
        cin>>input;
        myvec.push_back(input);
    }
    for (int i = 0;i<30;i++){
        if (find(myvec.begin(), myvec.end(), i+1) == myvec.end()){
            cout<<i+1<<endl;
        }    
    }
}