#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int totalcost;
    int totalline;
    int calculatedsum = 0;
    vector<vector<int>> repos;
    cin>>totalcost;
    cin>>totalline;
    for (int i = 0;i<totalline;i++){
        int input1, input2;
        vector<int>temp;
        cin>>input1>>input2;
        temp.push_back(input1);
        temp.push_back(input2);
        repos.push_back(temp);
        calculatedsum += repos[i][0] * repos[i][1];
    }
    if (calculatedsum == totalcost){cout<<"Yes"<<endl;}else {cout<<"No"<<endl;}
}