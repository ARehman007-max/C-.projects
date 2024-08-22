#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

const int N = 9;

// Define a basic linked list node
struct Node {
    int data;
    Node* next;
};

bool isSafe(int board[N][N], int row, int col, int num) {
    for (int i = 0; i < N; i++)
        if (board[row][i] == num || board[i][col] == num)
            return false;

    int boxRowStart = row - row % 3;
    int boxColStart = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + boxRowStart][j + boxColStart] == num)
                return false;

    return true;
}

void printBoard(int grid[N][N]) {
    system("cls");
    cout << "\t\t\t<================================================================================>" << endl;
    cout << "\t\t\t|                                                                                  |" << endl;
    cout << "\t\t\t|                        WELCOME TO SUDOKU Game :)                                 |" << endl;
    cout << "\t\t\t|                                                                                  |" << endl;
    cout << "\t\t\t|                     Fill in the missing numbers:):)                              |" << endl;
    cout << "\t\t\t|                                                                                  |" << endl;
    cout << "\t\t\t<================================================================================>" << endl;

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (col == 3 || col == 6)
                cout << " | ";
            cout << grid[row][col] << " ";
        }
        if (row == 2 || row == 5) {
            cout << endl;
            for (int i = 0; i < N; i++)
                cout << "---";
        }
        cout << endl;
    }
}

void initializeRow(Node*& head, int arr[N]) {
    head = nullptr;
    Node* temp = nullptr;

    for (int i = 0; i < N; i++) {
        Node* newNode = new Node{arr[i], nullptr};
        if (!head) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
}

void printRow(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool solveSudoku(int board[N][N], Node* linkedListBoard[N], int row, int col) {
    if (row == N - 1 && col == N)
        return true;

    if (col == N) {
        row++;
        col = 0;
    }

    if (board[row][col] != 0)
        return solveSudoku(board, linkedListBoard, row, col + 1);

    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;

            Node* temp = linkedListBoard[row];
            for (int i = 0; i < col; i++) {
                temp = temp->next;
            }
            temp->data = num;

            if (solveSudoku(board, linkedListBoard, row, col + 1))
                return true;

            board[row][col] = 0;
        }
    }
    return false;
}

bool isSolvedCompletely(int grid[N][N]) {
    for (int row = 0; row < N; row++)
        for (int col = 0; col < N; col++)
            if (grid[row][col] == 0)
                return false;

    return true;
}

void playGame(int board[N][N], Node* linkedListBoard[N]) {
    int row, col, num;
    while (true) {
        printBoard(board);
        cout << endl << endl;

        cout << "Enter row (-1 to exit): ";
        cin >> row;

        if (row == -1) {
            solveSudoku(board, linkedListBoard, 0, 0);
            printBoard(board);
            cout << endl;
            cout << "Better luck next time!!!" << endl;
            return;
        }

        cout << "Enter column: ";
        cin >> col;
        cout << "Enter number: ";
        cin >> num;

        row--;
        col--;

        if (!isSafe(board, row, col, num)) {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = num;

        Node* temp = linkedListBoard[row];
        for (int i = 0; i < col; i++) {
            temp = temp->next;
        }
        temp->data = num;

        if (isSolvedCompletely(board)) {
            cout << "Congratulations! You have solved the puzzle." << endl;
            printBoard(board);
            return;
        }
    }
}

int main() {
    system("title Project by Abdul Rehman, Farhan, Talha, Musa");
    system("color 8F");
    int board[N][N] = {
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}
    };

    Node* linkedListBoard[N];
    for (int i = 0; i < N; i++) {
        initializeRow(linkedListBoard[i], board[i]);
    }

    cout << "\t\t\t<================================================================================>" << endl;
    cout << "\t\t\t|                                                                                  |" << endl;
    cout << "\t\t\t|                        WELCOME TO SUDOKU Game :)                                 |" << endl;
    cout << "\t\t\t|                                                                                  |" << endl;
    cout << "\t\t\t|                     Fill in the missing numbers:):)                              |" << endl;
    cout << "\t\t\t|                                                                                  |" << endl;
    cout << "\t\t\t<================================================================================>" << endl;

    while (true) {
        int choice;
        cout << endl << endl;
        cout << "\t\t[1] Solve the Sudoku" << endl;
        cout << "\t\t[2] Unable to solve? View the solved Sudoku" << endl;
        cout << "\t\t[3] Exit" << endl;
        cout << "\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                playGame(board, linkedListBoard);
                break;
            case 2:
                if (solveSudoku(board, linkedListBoard, 0, 0)) {
                    cout << "Completely Solved Sudoku is: " << endl;
                    cout << endl << endl;
                    for (int i = 0; i < N; i++) {
                        printRow(linkedListBoard[i]);
                    }
                    cout << endl;
                    cout << "Better luck next time:(:(" << endl;
                } else
                    cout << "No solution found" << endl;
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
