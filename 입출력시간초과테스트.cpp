#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//

    int iter;
    vector<int>input1;
    vector<int>input2;
    cin>>iter;
    for (int i = 0;i<iter;i++){
        int a, b;
        cin>>a>>b;
        input1.push_back(a);
        input2.push_back(b);
    }
    for (int i = 0;i<iter;i++){
        cout<<input1[i] + input2[i]<<"\n";
    }
}