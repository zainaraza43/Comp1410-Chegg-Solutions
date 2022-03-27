// https://www.chegg.com/homework-help/questions-and-answers/1-connect-4-game-played-2-players-6-7-grid-players-take-turns-placing-piece-column-piece-d-q93916342

bool make_move(char board[6][7], int column, char player)
{
    if (board[0][column] == '.' && 0 <= column && column < 7)
    {
        placePiece(board, 0, column, player);
        return true;
    }
    return false;
}

bool check_win(char board[6][7], char player)
{
    /* Why you ask does this function just call another function, well that is very simply. Because I don't want to
     * write a new function when this one works perfectly fine. Also I need *ai and aiArr[2] for my ai and adding those
     * to the definition thingy at the top might be a not good thing for me to do so I won't
     */
    int ai, aiArr[2];
    return checkWinConditions(board, player, &ai, aiArr);
}