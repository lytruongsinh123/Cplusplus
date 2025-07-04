#include <iostream>
#include <vector>

using namespace std;

bool isSurrounded(vector<vector<char>>& board, int row, int col) {
    int directions[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
    int rows = board.size();
    int cols = board[0].size();

    for (auto& dir : directions) {
        int r = row + dir[0];
        int c = col + dir[1];
        if (r >= 0 && r < rows && c >= 0 && c < cols && board[r][c] == ' ') {
            return false;
        }
    }
    return true;
}

void convertSurrounded(vector<vector<char>>& board) {
    int rows = board.size();
    int cols = board[0].size();

    // Tạo một bản sao của bảng ban đầu
    vector<vector<char>> newBoard = board;

    // Kiểm tra từng ô trong bảng
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (board[i][j] == 'X' && (isSurrounded(board, i, j) || i == 0 || i == rows - 1 || j == 0 || j == cols - 1)) {
                newBoard[i][j] = 'O';
            }
            else if (board[i][j] == 'O') {
                newBoard[i][j] = 'X';
            }
        }
    }

    // Cập nhật bảng ban đầu
    board = newBoard;
}

int main() {
    int n; 
    cout << " nhap n :"; cin >> n;
    vector<vector<char>> board(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    cout << endl;
    convertSurrounded(board);

    // In bảng sau khi chuyển đổi
    for (auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
