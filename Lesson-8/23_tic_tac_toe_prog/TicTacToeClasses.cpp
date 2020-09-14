// The class header file for main.cpp

#include <iostream>
#include <string>
#include <fstream>

class Board
{
    // this class tracks the game and winner
    char positionsSelected[16];
    char winner;
    public:
        Board();
        char* getPositions();
        int setPosition(int gridNumber, char user);
        char checkRows();
        char checkColumns();
        char checkDiagnols();
        char determineWinner();
};

Board::Board()
{
    winner = 'z'; // for tie game
    for (int i=0; i<16;i++)
    { // initialize the game board with '_'
        positionsSelected[i] = '_';
    }
}

char* Board::getPositions()
{ // return all the positions on the board
    return positionsSelected;
}


int Board::setPosition(int gridNumber, char user)
{ // set a given positions on the board
    {

    if (positionsSelected[gridNumber] == '_')
    {
        positionsSelected[gridNumber] = user;
    }
    else
    {
        std::cout<<"The position is taken";
        return -1;
    }
    
    return 0;
    }
}

char Board::checkRows()
{
    int fourInRowX = 0;
    int fourInRowO = 0;
    
    for (int rows=0; rows<16; rows=rows+4)
    {
        for (int i=0; i<4; i++)
        {
            if (positionsSelected[rows+i] == 'x')
            {
                fourInRowX++;
            }
            if (positionsSelected[rows+i] == 'o')
            {
                fourInRowO++;
            }
        }
        
        if (fourInRowX==4)
        {
            winner = 'x';
            return winner;
        }
        
        if (fourInRowO==4)
        {
            winner = 'o';
            return winner;
        }
        
        fourInRowX = 0;
        fourInRowO = 0;
    }
    
    return 'z';
}

char Board::checkColumns()
{
    
    int fourInColX = 0;
    int fourInColO = 0;
    
    for (int columns=0; columns<4; columns++)
    {
        for (int i=0; i<16; i=i+4)
        {
            if (positionsSelected[columns+i] == 'x')
            {
                fourInColX++;
            }
            if (positionsSelected[columns+i] == 'o')
            {
                fourInColO++;
            }
        }
        
        if (fourInColX==4)
        {
            winner = 'x';
            return winner;
        }
        
        if (fourInColO==4)
        {
            winner = 'o';
            return winner;
        }
        
        fourInColX = 0;
        fourInColO = 0;
    }
    
    return 'z';
}

char Board::checkDiagnols()
{
    int fourInRowX = 0;
    int fourInRowO = 0;
    // check the diagnol from left to right
    for (int rows=0; rows<16; rows=rows+5)
    {
        if (positionsSelected[rows] == 'x')
        {
            fourInRowX++;
        }
        if (positionsSelected[rows] == 'o')
        {
            fourInRowO++;
        }
    }
    
    // check the diagnol from right to left
    if (fourInRowX != 4 && fourInRowO != 4)
    {
        for (int i=3; i<15; i=i+3)
        {
            if (positionsSelected[i] == 'x')
                fourInRowX++;
            
            if (positionsSelected[i] == 'o')
                fourInRowO++;
            
        }
    }
    
    if (fourInRowX==4)
    {
        winner = 'x';
        return winner;
    }
        
    if (fourInRowO==4)
    {
        winner = 'o';
        return winner;
    }
    
    return 'z';
}

char Board::determineWinner()
{ // if 4 in a row, then there is a winner
    winner = 'z';
    winner = checkRows();
    if (winner == 'z')
        winner = checkColumns();
    if (winner == 'z')
        winner = checkDiagnols();
    return winner;
    
}   