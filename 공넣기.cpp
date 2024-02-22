#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    int N,M;
    cin>>N>>M;
    int *arr = new int[N]{0};
    for (int i = 0;i<M;i++){
        int ran1, ran2, num;
        cin>>ran1>>ran2>>num;
        for (int k = ran1-1;k<ran2;k++){
            arr[k] = num;
        }
    }
    for (int j = 0;j<N;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    delete[] arr;
}