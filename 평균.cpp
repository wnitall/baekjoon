#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <iomanip> // std::setprecision 사용

using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    int totalnum;
    cin>>totalnum;
    double totalsum = 0;
    vector <double> myvec;
    vector <double> myvec2;
    for (int i = 0;i<totalnum;i++){
        int input;
        cin>>input;
        myvec.push_back(input);
    }
    auto maxnum = max_element(myvec.begin(), myvec.end());
    for (int i = 0;i<myvec.size();i++){
        myvec2.push_back(myvec[i]/(*maxnum)*100);
        totalsum += myvec2[i];
    }
    cout<<static_cast<double>(totalsum)/totalnum<<endl;
}