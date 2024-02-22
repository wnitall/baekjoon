#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    int totalnum, threshold;
    cin>>totalnum>>threshold;
    int arr[totalnum];
    for (int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        int a;
        cin>>a;
        arr[i] = a;
    }
    for (int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if (arr[i] < threshold){cout<<arr[i]<<" ";}
    }
    cout<<endl;

}