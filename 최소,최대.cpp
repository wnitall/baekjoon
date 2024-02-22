#include<iostream>
#include<vector> // vector를 사용하기 위해 추가
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int totalnum;
    cin >> totalnum;
    vector<int> arr(totalnum); // vector를 사용하여 동적 크기 조정 가능
    for (int i = 0; i < totalnum; i++){
        cin >> arr[i];
    }
    int minnum = arr[0], maxnum = arr[0];
    for (int i = 0; i < arr.size(); i++){ // vector의 size() 메서드 사용
        minnum = min(minnum, arr[i]);
        maxnum = max(maxnum, arr[i]);
    }
    cout << minnum << " " << maxnum << "\n"; // endl 대신 "\n" 사용
}
