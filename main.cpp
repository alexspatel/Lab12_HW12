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
	// Determines if the colume specified is full.
	int board[nRows][nCols];
	for( int i = 0; i < nCols; i++ )
	{
		for( int j = 0; j < nRows; j++ )
		{
			return true;
		}
	}

	// Determines if the column is within the bounds of the array.
	if( (move >= 1) && (move <= 7) )
	{
		return true;
	}	
	else
	{
		return false;
	}
}



