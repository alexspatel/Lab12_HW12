#include "ConnectFourBoard.h"

/*
 * Constructs a new Connect Four Board object, ready for a new game.
 *
 *        *************************************
 *        **** DO NOT MODIFY THIS FUNCTION ****
 *        *************************************
 */
ConnectFourBoard::ConnectFourBoard()
{
  // Initialize the board array to all spaces.
  for( int r = 0; r < ROWS; r++ )
  {
    for( int c = 0; c < COLS; c++ )
    {
      board[ r ][ c ] = ' ';
    }
  }

  // Player X always goes first.
  currentPlayer = 'X';
}

/*
 * Makes a move in the indicated column on the Connect Four board.
 * 
 * The function must ensure col is a valid column and that the column is not full.
 * The value of currentPlayer is then placed in the top-most empty row.
 * 
 * The function returns true if a valid move was made; false otherwise;
 */
bool ConnectFourBoard::makeMove( int col )
{
  /******** INSERT YOUR CODE BELOW HERE ********/



  /******** INSERT YOUR CODE ABOVE HERE ********/

  // Cound not make this move, so return false.
  return false;
}

/*
 * This function returns true if the board is full; false otherwise.
 * 
 * Since all moves go to the lowest unoccupied row, the function only
 * needs to look at the top row of each column for an empty space.
 */
bool ConnectFourBoard::isFull() const
{
  /******** INSERT YOUR CODE BELOW HERE ********/

  return false;  // Remove this line when you write your own code!



  /******** INSERT YOUR CODE ABOVE HERE ********/
}

/*
 * This function returns 'X' or 'O' if there is a winner on the board; ' ' otherwise.
 * 
 * The function must check all possible locations where four consecutive values
 * could be equal (and not spaces) and return true if it finds such a location.
 * If it finishes all of these tests without finding four consecutive locations
 * that match, it will return false.
 */
char ConnectFourBoard::getWinner() const
{
  /******** INSERT YOUR CODE BELOW HERE ********/



  /******** INSERT YOUR CODE ABOVE HERE ********/

  return ' ';  // Didn't find a winner so return a space.
}

/*
 * This function changes the current player.
 *
 *        *************************************
 *        **** DO NOT MODIFY THIS FUNCTION ****
 *        *************************************
 */
void ConnectFourBoard::changePlayers()
{
  // Change players ... this is called a 'ternary' or 'conditional' operator.
  currentPlayer = ( currentPlayer == 'X' ) ? 'O' : 'X';

  // Ternary operators can be quite handy ... here's a reference:
  //   http://msdn.microsoft.com/en-us/library/e4213hs1(v=vs.110).aspx
}

/*
 * This function retrieves the current player.
 *
 *        *************************************
 *        **** DO NOT MODIFY THIS FUNCTION ****
 *        *************************************
 */
char ConnectFourBoard::getCurrentPlayer() const
{
  return currentPlayer;
}

/*
 * This function retrieves the player at the indicated position of the board,
 * or a space if the board location is currently unoccupied.
 * The function must ensure row,col is a valid board location.
 *
 *        *************************************
 *        **** DO NOT MODIFY THIS FUNCTION ****
 *        *************************************
 */
char ConnectFourBoard::getPlayerAt( int row, int col ) const
{
  // Make sure not to go out of bounds of the array.
  if( row >= 0 && row < ROWS && col >= 0 && col < COLS )
  {
    return board[ row ][ col ];
  }

  // The code above should return a value from the board array.
  // If it doesn't, return something here to signal an error.
  return '!';
}
