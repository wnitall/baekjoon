#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//

    vector<int>input1;
    vector<int>input2;
    do{
        int a, b;
        cin>>a>>b;
        input1.push_back(a);
        input2.push_back(b);
    }while(input1.back() != 0 && input2.back() != 0);
    for (int i = 0;i<input1.size()-1;i++){
        cout<<input1[i] + input2[i]<<"\n";
    }
}