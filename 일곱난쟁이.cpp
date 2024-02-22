#include<stdio.h>
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main() {
    vector<int> myvec1;
    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        myvec1.push_back(num);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            vector<int> myvec2;
            for (int k = 0; k < 9; k++) {
                if (k != i && k != j) {
                    myvec2.push_back(myvec1[k]);
                }
            }

            int sum = accumulate(myvec2.begin(), myvec2.end(), 0);
            if (sum == 100) {
                sort(myvec2.begin(), myvec2.end());
                for (int num : myvec2) {
                    cout << num << endl;
                }
                return 0; // 조건을 만족하는 첫 번째 결과를 찾은 후 프로그램 종료
            }
        }
    }
}