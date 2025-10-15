//Tic-Tac-Toe Game: Implement a two-player command-line version of Tic-Tac-Toe. This project involves working with 2D arrays, game logic, and handling user input for moves.
#include <stdio.h>
char board[3][3];   // 3x3 Tic-Tac-Toe grid
// Function to initialize the board
void initBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}
// Function to display the board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i != 2) printf("\n---|---|---\n");
    }
    printf("\n\n");
}
// Function to check if someone has won
int checkWin() {
    // Rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
    }
    // Columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
            return 1;
    }
    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;
    return 0;
}
// Function to check if the board is full
int isFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}
int main() {
    int row, col;
    char player = 'X';
    int gameOver = 0;
    printf("🎮 TIC-TAC-TOE GAME 🎮\n");
    printf("Player 1: X\nPlayer 2: O\n");
    initBoard();
    while (!gameOver) {
        displayBoard();
        printf("Player %c, enter row and column (0, 1, or 2): ", player);
        scanf("%d %d", &row, &col);
        // Validate input
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid move! Please enter values between 0 and 2.\n");
            continue;
        }
        if (board[row][col] != ' ') {
            printf("Spot already taken! Try again.\n");
            continue;
        }
        // Place mark
        board[row][col] = player;
        // Check win
        if (checkWin()) {
            displayBoard();
            printf("🏆 Player %c WINS!\n", player);
            gameOver = 1;
        } else if (isFull()) {
            displayBoard();
            printf("🤝 It's a DRAW!\n");
            gameOver = 1;
        } else {
            // Switch player
            player = (player == 'X') ? 'O' : 'X';
        }
    }
    return 0;
}
