#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main(){
    //입출력 최적화.///////////////////////////////////
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //입출력 시간 초과가 그래도 뜬다면 endl 대신 \n 사용하기//
    string input;
    map <char, int> mymap = {
        {'A', 2}, {'B', 2}, {'C', 2},
        {'D', 3}, {'E', 3}, {'F', 3},
        {'G', 4}, {'H', 4}, {'I', 4},
        {'J', 5}, {'K', 5}, {'L', 5},
        {'M', 6}, {'N', 6}, {'O', 6},
        {'P', 7}, {'Q', 7}, {'R', 7}, {'S', 7},
        {'T', 8}, {'U', 8}, {'V', 8},
        {'W', 9}, {'X', 9}, {'Y', 9}, {'Z', 9}
    };
    map <char, int> phonedial = {
        {'1',2},{'2',3},{'3',4},
        {'4',5},{'5',6},{'6',7},
        {'7',8},{'8',9},{'9',10},
        {'0',11}
    };

    cin>>input;
    int totalnum = 0;
    for (int i = 0;i<input.length();i++){
        int subsum = 0;
        int calnum = mymap[input[i]];
        for (char ch2 : to_string(calnum)){
            subsum += phonedial[ch2];
        }
        totalnum += subsum;
    }
    cout<<totalnum<<endl;

	return 0;
}