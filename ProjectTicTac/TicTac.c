#include <stdio.h>

// Function to print the Tic-Tac-Toe board
void printBoard(char board[3][3]) {
    printf("\nTic-Tac-Toe\n");
    printf("-------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 3; j++) {
            printf("%c | ", board[i][j]);
        }
        printf("\n-------------\n");
    }
}

// Function to check if a player has won
int checkWin(char board[3][3], char player) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1; // Row win
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1; // Column win
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1; // Diagonal win
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1; // Diagonal win

    return 0;
}

// Function to check if the game is a draw
int checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0; // The game is not a draw
        }
    }
    return 1; // The game is a draw
}

int main() {
    char board[3][3] = { { ' ', ' ', ' ' },
                        { ' ', ' ', ' ' },
                        { ' ', ' ', ' ' } };
    int currentPlayer = 1; // 1 for Player 1, 2 for Player 2
    int moveCount = 0;

    while (1) {
        printBoard(board);

        int row, col;

        // Get the current player's move
        printf("Player %d, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // Check if the move is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        // Make the move
        if (currentPlayer == 1)
            board[row][col] = 'X';
        else
            board[row][col] = 'O';

        moveCount++;

        // Check if the current player has won
        if (checkWin(board, currentPlayer == 1 ? 'X' : 'O')) {
            printBoard(board);
            printf("Player %d wins!\n", currentPlayer);
            break;
        }

        // Check if the game is a draw
        if (moveCount == 9) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}
