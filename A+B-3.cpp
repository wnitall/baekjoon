#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int iter;
    cin>>iter;
    vector <int> vec1;
    vector <int> vec2;
    for (int i = 0;i<iter;i++){
        int input1 = 0;
        int input2 = 0;
        cin>>input1>>input2;
        vec1.push_back(input1);
        vec2.push_back(input2);
    }
    for (int i = 0;i<iter;i++){
        cout<<vec1[i]+vec2[i]<<endl;
    }
}