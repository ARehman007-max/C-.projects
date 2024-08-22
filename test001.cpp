#include <iostream>
using namespace std;

const int N = 9;

bool isValid(int board[N][N], int row, int col, int num) {
    // Check if the number is not in the current row or column
    for (int i = 0; i < N; i++) {
        if (board[row][i] == num || board[i][col] == num) {
            return false;
        }
    }

    // Check if the number is not in the current 3x3 grid
    int startRow = 3 * (row / 3);
    int startCol = 3 * (col / 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[startRow + i][startCol + j] == num) {
                return false;
            }
        }
    }

    return true;
}

bool findEmptyLocation(int board[N][N], int &row, int &col) {
    // Find the first empty cell (cell with 0)
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (board[row][col] == 0) {
                return true;
            }
        }
    }
    return false;  // If no empty cell is found
}

bool solveSudoku(int board[N][N]) {
    int row, col;

    // If no empty cell is found, the Sudoku is solved
    if (!findEmptyLocation(board, row, col)) {
        return true;
    }

    // Try placing numbers 1-9 in the empty cell
    for (int num = 1; num <= 9; num++) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num;

            // Recursively solve the rest of the Sudoku
            if (solveSudoku(board)) {
                return true;
            }

            // If placing the current number doesn't lead to a solution, backtrack
            board[row][col] = 0;
        }
    }

    return false;  // No solution found
}

void printSudoku(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int board[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board)) {
        cout << "Sudoku solution:\n";
        printSudoku(board);
    } else {
        cout << "No solution exists.\n";
    }

    return 0;
}
