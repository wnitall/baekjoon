#include<stdio.h>
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int myalgorithm(int a){
    if (a == 0) {return 1;}
    if (a < 0) {return 0;}
    return myalgorithm(a-1) + myalgorithm(a-2) + myalgorithm(a-3);
}


int main() {
    int numofiter;
    vector<int>inputs;
    cin>>numofiter;
    for (int i = 0;i<numofiter;i++){
        int input;
        cin>>input;
        inputs.push_back(input);
    }
    for (int j = 0;j<numofiter;j++){
        cout<<myalgorithm(inputs[j])<<endl;
    }
    return 0;
}