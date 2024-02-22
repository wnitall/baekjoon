#include<stdio.h>
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main() {
    int num1, num2, num3;
    int num4 = 1;
    int e = 1, s = 1, m = 1;
    cin>>num1>>num2>>num3;
    while (true){
        if (e == num1 and s == num2 and m == num3){
            cout<<num4<<endl;
            break;
        }
        e = e%15 + 1;
        s = s%28 + 1;
        m = m%19 + 1;
        num4++;
    }
    return 0;
}