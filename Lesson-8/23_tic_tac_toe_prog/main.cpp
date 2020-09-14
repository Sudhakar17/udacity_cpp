/*Goal: Practice creating classes and functions. 
**Create a program that allows two users to 
**play a 4x4 tic-tac-toe game. 
*/

#include "TicTacToeClasses.cpp"
#include "TicTacToeFunctions.cpp"

int main()
{
    Board gameBoard;
    std::string nameX;
    std::string nameO;
    
    int tieGame = 0;
    char gameWinner = 'x';
    int numTurns = 0;
    
    // Get the name of the players
    getUserNames(nameX, nameO);
    
    // Each player has the maximum of 8 turns
    while (numTurns < 8)
    {
        // print the board that has the positions numbered
        printTheBoard(gameBoard);
        
        // ask the player x where they want to put an 'x'
        printUserPrompt(nameX, 'x');
        
        // check that the input is a valid position 
        // and that it has not already taken
        checkResponse(gameBoard, 'x');
        
        //check to see if player 'x' has four in a row
        gameWinner = gameBoard.determineWinner();
        
        
        if (gameWinner != 'z')
        {
            printTheBoard(gameBoard);
            printGameWinner(gameBoard, nameX, nameO);
            break;
        }
        
        //Now do the same for player 'o'
        //print a board that has the postions numbered
        printTheBoard(gameBoard);
        //ask player O where they want to put an 'o'
        printUserPrompt(nameO, 'o');
        //check that the input is a valid position and that
        //it has not already been taken
        checkResponse(gameBoard, 'o');

        printTheBoard(gameBoard);
        //check to see if player 'o' has four in a row somewhere on the board
        gameWinner = gameBoard.determineWinner();
        //if player 'o' has won, end the game
        if(gameWinner != 'z')
        {
            printTheBoard(gameBoard);
            printGameWinner(gameBoard, nameX, nameO);
            break;
        }
        numTurns++;
    }
    //if there is no winner at this point, the game is a tie
    if(numTurns >= 8)
        std::cout<<"Tie game.\n\n";

    
    return 0;
}