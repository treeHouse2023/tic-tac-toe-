#include <stdio.h>

// Function to print the Tic-Tac-Toe board
void printBoard(char board[][3]) {
    printf("-------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------\n");
    }
}

// Function to check if a player has won
int checkWin(char board[][3], char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return 1;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }

    return 0;
}

int main() {
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int row, col;
    char currentPlayer = 'X';
    int moves = 0;

    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        // Print the current board
        printBoard(board);

        // Get the player's move
        printf("Player %c's turn. Enter row (0-2): ", currentPlayer);
        scanf("%d", &row);
        printf("Enter column (0-2): ");
        scanf("%d", &col);

        // Check if the move is valid
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;
        moves++;

        // Check if the current player has won
        if (checkWin(board, currentPlayer)) {
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        // Check if it's a draw
        if (moves == 9) {
            printf("It's a draw!\n");
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    // Print the final board
    printBoard(board);

    return 0;
}
