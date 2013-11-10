/* CSCI 261 Lab 12 - Connect Four
 *
 * Co-Author: Alex Patel
 *
 * Co-Author: _INSERT_YOUR_NAME_HERE_
 *
 * This program runs either the GUI or console based version of Connect Four.
 */

#include <iostream>   // "Computer, include the iostream library so I can use cin and cout."
#include <iomanip>    // "Computer, include the iomanip library so I can make my output pretty."
#include <cstdlib>    // "Computer, include the standard library so my program isn't boring."
#include <string>     // "Computer, include the string library so I can use more than one letter."
#include <cmath> 



// Function prototypes
void gooey();
void console();
bool makeMove( int move );
bool isFull( int move );
bool getWinner();

// Constants
const int nRows = 6;
const int nCols = 7;

int main()
{
  // Plays a GUI based game.
  //gooey();

  // Plays a console based game.
  console();
  


  return EXIT_SUCCESS;
}

// The makeMove function receives a column number as a parameter
// and returns true or false to indicate whether or not it successfully
// made a move.
bool makeMove( int move )
{
  // Determines if the column specified is full.
  int board[nRows][nCols];
  for( int i = 0; i < nCols; i++ )
  {
    for( int j = 0; j < nRows; j++ )
    {
      board[i][j];
      if( j < 0 ) // If the column is greater than 0, the column is not full
      {
        return true;
      }
      else
      {
        return false;
      }
    }
  }

  // Determines if the column is within the bounds of the array.
  while( move > 7 && move < 0 )
  {
    return false;
  }
}


// Determines if the entire board is full, returning true if it is; false otherwise.
bool isFull()
{
  int board[nRows][nCols];
  for( int i = 0; i < nRows; i++ )
  {
    for( int j = 0; j < nCols; i++ )
    {
      while( nRows > 0 ) // If the row is greater than 0, the board is not full.
      {
        return false;
      }
    }
    
  }

}

// must examine the entire board looking for four consecutive locations horizontally,
// vertically, or diagnally that are non-empty and contain the same value, X or O.
bool getWinner()
{
  int board[nRows][nCols];
  for( int r = 0; r < nRows; r++ )
  {
    for( int c = 0; c < nCols - 1; c++ )
    {
      if( board[ r ][ c ] != ' ' && board[ r ][ c ] == board[ r ][ c + 1 ] )
      {
        // Found two horizontally adjacent locations containing the same player!
      }
    }
  }
}
