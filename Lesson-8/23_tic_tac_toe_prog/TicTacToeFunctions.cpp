#include <iostream>
#include <string>

void getUserNames(std::string &, std::string &);
void printBlankBoard();
void printTheBoard(Board);
void printUserPrompt(std::string, char);
void printGameWinner(Board, std::string, std::string);
int getUserResponse();
void checkResponse(Board&, char);

void getUserNames(std::string &userX, std::string &userY)
{ // get the user names
    std::cout<<"Name of the user to be 'x': "<<std::endl;
    std::cin>>userX;
    std::cout<<"Name of the user to be 'o': "<<std::endl;
    std::cin>>userY;
}

void printBlankBoard()
{ // print the blank board with numbered squares

    for (int i=0; i<16; i++)
    {
        std::cout<<"|"<<i<<":";
        if (i<9)
            std::cout<<" ";
        if (i % 4==3)
            std::cout<<"|\n";
    }
    std::cout<<"\n\n\n";
}

void printTheBoard(Board boardIn)
{ // print the board with the player moves
    printBlankBoard();
    
    for (int i=0; i<16; i++)
    {
        std::cout<<"|"<<boardIn.getPositions()[i];
        
        if (i % 4 == 3)
        {
            std::cout<<"|\n";
        }
    }
    
    std::cout<<"\n\n\n";
}

void printUserPrompt(std::string nameIn, char letter)
{//prompt for user input
    std::cout<<nameIn<<" where would you like to place an "<<letter<<"?: ";
    std::cout<<"\n\n";
    std::cout<<" where would you like to place an "<<letter<<"?: ";
}

void printGameWinner(Board boardIn, std::string nameX, std::string nameY)
{ // print the winner statement
    char winner;
    winner = boardIn.determineWinner();
    if (winner == 'x')
        std::cout<<"Congrats "<<nameX<<" you won! \n\n";
    if (winner == 'o')
        std::cout<<"Congrats "<<nameY<<" you won! \n\n";
}

int getUserResponse()
{
    // Get the chosen user position, check that it is
    // an integer and it is between 0 and 15
    int position = -1;
    std::cout<<"Enter an integer between 0 and 15: "<<std::endl;
    std::cin>>position;
    
    while(position > 15 || position < 0)
    {
        std::cin.clear();
        std::cout<<"That is not a valid position \n";
        std::cout<<"Enter a number between 0 and 15: ";
        std::cin>>position;
    }
    
    return position;
}

void checkResponse(Board &boardIn, char input)
{ // check that position is already selected or not
    int position;
    int userInput;
    
    do
    {
        position = getUserResponse();
        userInput = boardIn.setPosition(position, input);
        if (userInput == -1)
        {
            std::cout<<"The position is taken. \n";
        }
    }while (userInput == -1);
    
}
