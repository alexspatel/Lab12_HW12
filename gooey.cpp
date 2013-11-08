/*
 * The gooey function in this file uses the ConnectFourBoard class
 * to play a the Connect Four game with a Graphical User Interface.
 * (Heh ... get it ... "gooey" ... heh ...)
 */

#include "../lib/graphics.h"
#include "ConnectFourBoard.h"

// The size of the entire board is based on the size of a single cell.
const int CELL_SIZE = 64;
const int WIDTH = CELL_SIZE * ConnectFourBoard::COLS;
const int HEIGHT = WIDTH;

// Function prototypes
int getMove();
void draw( ConnectFourBoard board );
void showMessage( char message[] );

/*
 *        *************************************
 *        **** DO NOT MODIFY THIS FUNCTION ****
 *        *************************************
 */
void gooey()
{
  // Initialize a graphics window and set a few drawing properties.
  initwindow( WIDTH, HEIGHT, "Connect Four", 32, 32 );
  setbkcolor( YELLOW );
  settextjustify( CENTER_TEXT, CENTER_TEXT );
  settextstyle( BOLD_FONT, HORIZ_DIR, 4 );
  cleardevice();

  // Create the board and show it for the first time.
  ConnectFourBoard theBoard;
  draw( theBoard );

  // The game continues until there is a winner or the board is full.
  while( theBoard.getWinner() == ' ' && !theBoard.isFull() )
  {
    // Show the current player and get a move.
    if( theBoard.getCurrentPlayer() == 'X' )
    {
      showMessage( "Red player's turn." );
    }
    else
    {
      showMessage( "Blue player's turn." );
    }

    int move = getMove();  // getMove returns a zero-based array index for the column.

    // The makeMove function returns true if it successfully makes a move.
    // Stay in this loop until a successful move is entered and made.
    while( !theBoard.makeMove( move ) )
    {
      // Could show an error message here, but it's not really necessary.
      // showMessage( "Invalid move." );
      move = getMove();
    }

    // A move was successfully made, so change players and re-draw the board.
    theBoard.changePlayers();
    draw( theBoard );
  }

  // Game is over ... show the results.
  char winner = theBoard.getWinner();
  if( winner == ' ' )
  {
    showMessage( "Tie game." );
  }
  else if( winner == 'X' )
  {
    showMessage( "Red wins!" );
  }
  else
  {
    showMessage( "Blue wins!" );
  }

  // Use the getMove function to wait for a click before closing things down.
  getMove();
  closegraph();
}

/*
 *        *************************************
 *        **** DO NOT MODIFY THIS FUNCTION ****
 *        *************************************
 */
void draw( ConnectFourBoard board )
{
  setcolor( BLACK );
  rectangle( 0, CELL_SIZE, WIDTH, HEIGHT );

  for( int r = 0; r < ConnectFourBoard::ROWS; r++ )
  {
    for( int c = 0; c < ConnectFourBoard::COLS; c++ )
    {
      if( board.getPlayerAt( r, c ) == 'X' )
      {
        setfillstyle( SOLID_FILL, RED );
      }
      else if( board.getPlayerAt( r, c ) == 'O' )
      {
        setfillstyle( SOLID_FILL, BLUE );
      }
      else
      {
        setfillstyle( SOLID_FILL, WHITE );
      }

      fillellipse( c * CELL_SIZE + CELL_SIZE / 2, r * CELL_SIZE + CELL_SIZE * 3 / 2, CELL_SIZE / 2 - 8, CELL_SIZE / 2 - 8 );
    }
  }
}

/*
 *        *************************************
 *        **** DO NOT MODIFY THIS FUNCTION ****
 *        *************************************
 */
void showMessage( char message[] )
{
  // Draw a white rectangle in the message to clear previous messages.
  setfillstyle( SOLID_FILL, WHITE );
  bar( 0, 0, WIDTH, CELL_SIZE - 1 );

  // Draw the message.
  setcolor( BLACK );
  setbkcolor( WHITE );
  outtextxy( WIDTH / 2, CELL_SIZE / 2, message );
}

/*
 *        *************************************
 *        **** DO NOT MODIFY THIS FUNCTION ****
 *        *************************************
 */
int getMove()
{
  // Wait for a mouse click.
  while( !ismouseclick( WM_LBUTTONDOWN ) )
  {
    delay( 100 );
  }
  int x, y;
  getmouseclick( WM_LBUTTONDOWN, x, y );

  return x / CELL_SIZE;
}
