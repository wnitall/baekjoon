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
    cin>>iter;
    vector <string> myvec;
    for (int i = 0;i<iter;i++){
        int input;
        string mystr;
        cin>>input>>mystr;
        string plusstr;
        for (int k = 0;k<mystr.size();k++){
            for (int j = 0;j<input;j++){
                plusstr += mystr[k];
            }
        }
        myvec.push_back(plusstr);
    }
    for (int i = 0;i<iter;i++){
        cout<<myvec[i]<<endl;
    }
}