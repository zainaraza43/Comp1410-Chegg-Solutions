// https://www.chegg.com/homework-help/questions-and-answers/1-connect-4-game-played-2-players-6-7-grid-players-take-turns-placing-piece-column-piece-d-q94325948

#include <stdio.h>

/* NO other header files are allowed */

/* NO global variables are allowed */

/* Macros used to represent the state of each square */

#define EMPTY 0

#define CIRCLE 1

#define CROSS 2

/* Initialize the game board by setting all nine squares to EMPTY */

void initGameBoard(int gameBoard[3][3])
{

    int i, j;

    for (i = 0; i < 3; i++)

        for (j = 0; j < 3; j++)

            gameBoard[i][j] = EMPTY;
}

/* Display the game board on the screen

In Part 1, you are required to follow exactly the output format stated in the project specification

You are welcome to design and implement a better one in Part 2

IMPORTANT: Using other output format in Part 1 will result in mark deduction

If you have a better one, please use them in Part 2 instead */

// TODO: Complete the printGameBoard(...) function here

void printGameBoard(int gameBoard[3][3])

{

    int i, j, k = 7, l;

    printf("=========\n");

    for (i = 0; i < 3; i++)

    {

        l = k;

        printf("|");

        for (j = 0; j < 3; j++)

        {

            if (gameBoard[i][j] == EMPTY)

                printf("%d|", l);

            else if (gameBoard[i][j] == CIRCLE)

                printf("O|");

            else

                printf("X|");

            l++;
        }

        printf("\n");

        k -= 3;
    }

    printf("=========\n\n");
}

/* Ask the human player to place the mark.

In Part 1, you can assume that the user input must be valid (i.e, an empty space between 1 and 9).

You are welcome to perform error checking in Part 2. */

void placeMarkByHumanPlayer(int gameBoard[3][3], int mark)
{

    int num = 0;

    printf("Enter a cell number 1 to 9: ");

    scanf("%d", &num);

    switch (num)

    {

    case 1:

        gameBoard[2][0] = mark;

        break;

    case 2:

        gameBoard[2][1] = mark;

        break;

    case 3:

        gameBoard[2][2] = mark;

        break;

    case 4:

        gameBoard[1][0] = mark;

        break;

    case 5:

        gameBoard[1][1] = mark;

        break;

    case 6:

        gameBoard[1][2] = mark;

        break;

    case 7:

        gameBoard[0][0] = mark;

        break;

    case 8:

        gameBoard[0][1] = mark;

        break;

    case 9:

        gameBoard[0][2] = mark;

        break;
    }
}

/* Return 1 if there is a winner in the game, otherwise return 0 */

/* Note: the winner is the current player indicated in main() */

int hasWinner(int gameBoard[3][3])
{

    int i;

    for (i = 0; i < 3; i++)

    {

        if (gameBoard[i][0] == CROSS && gameBoard[i][1] == CROSS && gameBoard[i][2] == CROSS)

            return 1;

        if (gameBoard[0][i] == CROSS && gameBoard[1][i] == CROSS && gameBoard[2][i] == CROSS)

            return 1;

        if (gameBoard[i][0] == CIRCLE && gameBoard[i][1] == CIRCLE && gameBoard[i][2] == CIRCLE)

            return 1;

        if (gameBoard[0][i] == CIRCLE && gameBoard[1][i] == CIRCLE && gameBoard[2][i] == CIRCLE)

            return 1;
    }

    if (gameBoard[0][0] == CIRCLE && gameBoard[1][1] == CIRCLE & gameBoard[2][2] == CIRCLE)

        return 1;

    if (gameBoard[0][0] == CROSS && gameBoard[1][1] == CROSS & gameBoard[2][2] == CROSS)

        return 1;

    if (gameBoard[0][2] == CROSS && gameBoard[1][1] == CROSS && gameBoard[2][0] == CROSS)

        return 1;

    if (gameBoard[0][2] == CIRCLE && gameBoard[1][1] == CIRCLE && gameBoard[2][0] == CIRCLE)

        return 1;

    return 0;
}

/* Return 1 if the game board is full, otherwise return 0 */

// TODO: Complete the isFull(...) function here

int isFull(int gameBoard[3][3])

{

    int i, j;

    for (i = 0; i < 3; i++)

        for (j = 0; j < 3; j++)

            if (gameBoard[i][j] == EMPTY)

                return 0;

    return 1;
}

/* Determine the next move of the computer player.

In Part 1, you are required to implement the following naive strategy:

place the mark in the first empty space scanning from 1 to 9.

You are welcome to design and implement better strategies in Part 2.

IMPORTANT: Using other strategies in Part 1 will result in mark deduction.

If you have better strategies, please use them in Part 2 instead. */

// TODO: Complete the placeMarkByComputerPlayer(...) function here

void placeMarkByComputerPlayer(int gameBoard[3][3], int mark)

{

    int i, j;

    for (i = 0; i < 3; i++)

        for (j = 0; j < 3; j++)

            if (gameBoard[i][j] == EMPTY)

            {

                gameBoard[i][j] = mark;

                return;
            }
}

/* The main function */

int main()
{

    /* Local variables */

    int gameBoard[3][3]; // Each element stores 0 (EMPTY), 1 (CIRCLE), or 2 (CROSS)

    int currentPlayer; // 1: Player 1 (Human) 2: Player 2 (Human) or Computer Player

    int gameEnds; // 0: The game continues 1: The game ends

    int numOfHumanPlayers; // 1 or 2

    /* Initialize the local variables by invoking a function, using assignment statements, and reading the user input */

    initGameBoard(gameBoard);

    currentPlayer = 1;

    gameEnds = 0;

    printf("How many human players [1-2]?\n");

    scanf("%d", &numOfHumanPlayers); // In Part 1, you can assume that the user input must be valid

    /* Uncomment the following statements to test whether the printGameBoard() and the placeMarkByHumanPlayer() functions

    are implemented correctly

    You can add more if you wish

    After testing, you can delete them or move them elsewhere */

    printGameBoard(gameBoard);

    while (gameEnds == 0)

    {

        printf("Player 1, please place your mark [1-9]:\n");

        placeMarkByHumanPlayer(gameBoard, CIRCLE);

        printGameBoard(gameBoard);

        gameEnds = hasWinner(gameBoard);

        if (gameEnds == 1)
        {

            printf("Plyaer 1 wins!!\n");

            continue;
        }

        gameEnds = isFull(gameBoard);

        if (gameEnds == 1)
        {

            printf("Its Draw!!\n");

            continue;
        }

        if (numOfHumanPlayers == 2)

        {

            printf("Player 2, please place your mark [1-9]:\n");

            placeMarkByHumanPlayer(gameBoard, CROSS);

            printGameBoard(gameBoard);

            gameEnds = hasWinner(gameBoard);

            if (gameEnds == 1)
            {

                printf("Plyaer 1 wins!!\n");

                continue;
            }
        }

        else

        {

            printf("Computer Player\n");

            placeMarkByComputerPlayer(gameBoard, CROSS);

            printGameBoard(gameBoard);

            gameEnds = hasWinner(gameBoard);

            if (gameEnds == 1)
            {

                printf("Computer Plyaer wins!!\n");

                continue;
            }
        }
    }

    return 0;
}