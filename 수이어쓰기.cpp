#include<stdio.h>
#include<iostream>
#include<numeric>
#include<cmath>
using namespace std;

int main() {
    int N;
    cin>>N;
    int totalsum = 0;
    for (int i = 1;i<N+1;i++){
        totalsum += (log10(i)+1);
    }
    cout<<totalsum<<endl;
}