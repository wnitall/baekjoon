#include<stdio.h>
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include <cmath> // log10 함수를 사용하기 위해 필요

using namespace std;

vector<int> splitNumber(int num) {
    vector<int> digits;
    if (num == 0) {
        digits.push_back(0); // 입력 값이 0이면 벡터에 0을 추가
        return digits;
    }
    while (num > 0) {
        digits.push_back(num % 10); // 10으로 나눈 나머지를 벡터에 추가
        num /= 10; // num을 10으로 나눔
    }
    reverse(digits.begin(), digits.end()); // 벡터를 뒤집음
    return digits;
}

vector<int> possiblenum = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void generateNumbers(const vector<int>& possiblenum, vector<int>& result, int N, int depth = 0, int number = 0) {
    if (N == 0){return;}
    if (depth == N) {
        result.push_back(number);
        return;
    }

    for (size_t i = 0; i < possiblenum.size(); ++i) {
        // 첫 번째 자리 숫자가 0이 되지 않도록 합니다(단, N이 1인 경우는 예외).
        if (depth == 0 && possiblenum[i] == 0 && N != 1) continue;

        generateNumbers(possiblenum, result, N, depth + 1, number * 10 + possiblenum[i]);
    }
}

int main() {
    int targetnum;
    cin>>targetnum;
    vector<int> targetvector;
    targetvector = splitNumber(targetnum);
    int inputCount;
    cin >> inputCount; // 입력받을 숫자의 개수 (예: 8)
    vector<int> possiblenum = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // 입력 개수에 맞는 크기의 벡터 생성
    for(int i = 0; i < inputCount; ++i) {
        int input;
        cin >> input; // 입력 개수만큼 숫자를 받음
        possiblenum.erase(remove(possiblenum.begin(), possiblenum.end(), input), possiblenum.end());
    }
    vector<int> result;
    generateNumbers(possiblenum, result, targetvector.size()-1);
    generateNumbers(possiblenum, result, targetvector.size());
    generateNumbers(possiblenum, result, targetvector.size()+1);
    int totalmove;
    totalmove = abs(100-targetnum);
    for (int num: result){
        if (totalmove>abs(num - targetnum) + log10(num)+1){
            totalmove = abs(num - targetnum) + log10(num)+1;
        }
    }
    cout<<totalmove<<endl;
    return 0;
}