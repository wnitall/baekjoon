#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// 테트로미노 모양을 모두 정의합니다. (dx, dy)는 각 모양의 상대적 위치를 나타냅니다.
const int tetromino[19][4][2] = {
    {{0, 0}, {0, 1}, {0, 2}, {0, 3}}, // I 모양
    {{0, 0}, {1, 0}, {2, 0}, {3, 0}}, // I 모양 (회전)
    {{0, 0}, {0, 1}, {1, 0}, {1, 1}}, // O 모양
    {{0, 0}, {1, 0}, {2, 0}, {2, 1}}, // L 모양
    {{0, 1}, {1, 1}, {2, 1}, {2, 0}}, // L 모양 (반전)
    {{0, 0}, {0, 1}, {0, 2}, {1, 2}}, // L 모양 (회전)
    {{0, 2}, {1, 2}, {1, 1}, {1, 0}}, // L 모양 (회전, 반전)
    {{0, 0}, {1, 0}, {1, 1}, {2, 1}}, // S 모양
    {{1, 0}, {1, 1}, {0, 1}, {0, 2}}, // S 모양 (회전)  
    {{0, 1}, {1, 1}, {1, 0}, {2, 0}}, // S 모양 (반전)
    {{0, 0}, {0, 1}, {1, 1}, {1, 2}}, // S 모양 (회전, 반전)
    {{0, 0}, {1, 0}, {1, 1}, {1, 2}}, // T 모양
    {{1, 0}, {0, 1}, {1, 1}, {2, 1}}, // T 모양 (회전)
    {{0, 2}, {1, 2}, {1, 1}, {1, 0}}, // T 모양 (회전, 반전)
    {{0, 1}, {1, 1}, {2, 1}, {1, 0}}, // T 모양 (반전)
    {{0, 0}, {0, 1}, {0, 2}, {1, 1}}, // T 모양 (회전)
    {{0, 1}, {1, 0}, {1, 1}, {1, 2}}, // T 모양 (회전, 반전)
    {{1, 0}, {1, 1}, {1, 2}, {0, 1}}, // T 모양 (반전)
    {{0, 0}, {1, 0}, {2, 0}, {1, 1}}  // T 모양 (회전)
};

int calculateSpecialTetrominoSum(const vector<vector<int>>& board, int x, int y) {
    int N = board.size();
    int M = board[0].size();
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int maxSum = 0;

    // 중심을 기준으로 4가지 방향에서 3가지를 선택하는 모든 경우를 고려
    for (int i = 0; i < 4; ++i) {
        int sum = board[x][y]; // 중심 셀의 값부터 시작
        bool isValid = true;
        for (int j = 0; j < 3; ++j) { // 현재 방향에서 시계방향으로 3개를 선택
            int nx = x + dx[(i+j)%4];
            int ny = y + dy[(i+j)%4];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                sum += board[nx][ny];
            } else {
                isValid = false;
                break;
            }
        }
        if (isValid) {
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int calculateMax(int N, int M, const vector<vector<int>>& board){
    int Maxsum = 0;
    for (int i = 0;i<N;i++){
        for (int j = 0;j<M;j++){
            for (int k = 0;k<19;k++){
                int sum = 0;
                bool isValid = true;
                for (int t = 0;t<4;t++){
                    int di = i + tetromino[k][t][0];
                    int dj = j + tetromino[k][t][1];
                    if (di >= 0 && di < N && dj >= 0 && dj < M){
                        sum = sum + board[di][dj];
                    }
                    else{
                        isValid = false;
                        break;

                    }
                }
                if (isValid){
                    Maxsum = max(sum, Maxsum);
                }
            }
            Maxsum = max(Maxsum, calculateSpecialTetrominoSum(board, i, j));
        }
    }
    return Maxsum;
}


int main() {
    int N, M;
    cin >> N >> M; // 종이의 세로 크기 N과 가로 크기 M을 입력 받음

    // 2차원 벡터를 선언하고, N x M 크기로 초기화
    vector<vector<int>> paper(N, vector<int>(M));
    // 입력받은 수를 2차원 벡터에 저장
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> paper[i][j];
        }
    }
    cout<<calculateMax(N, M, paper)<<endl;
    return 0;
}