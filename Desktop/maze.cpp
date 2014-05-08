#include <iostream>

using namespace std;

int main() {
	char player = '&';
	const int rows = 24;
	const int columns = 80;
	int playerRow = 0;
	int playerColumn = 0;
	char input;
	char board [rows][columns + 1] = {
	
	"**********************************===*******************************************", 
	"***     ***             ******                                              ****",
	"****************   *****************************************************   *****" ,
    "**                                                                            **" ,
	"**   ***************************************************************************" ,
	"**       MMMMMMMMMMM                                                          **" ,
    "**       MMMMMMMMMMM       ***   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         **" ,
	"**       MMMMMMMMMMM       ***   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         **" ,
	"**       MMMMMMMMMMM       ***   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         **" ,
	"**       MMMMMMMMMMM       ***   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         **" ,
	"**       MMMMMMMMMMM       ***   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         **" ,
	"**       MMMMMMMMMMM       ***   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         **" ,
	"**       MMMMMMMMMMM       ***   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         **" ,
	"**       MMMMMMMMMMM       ***   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         **" ,
	"**                         ***                                                **",
	"**************************************   ***************************************" ,
	"******                                   ****************                   ****" ,
	"******   ************************************************   ********************" ,
	"******                                                      ***          *******" ,
	"*********************************************************   **********   *******" ,
	"**     wwwwwwwwww          *******                          **********   *******" ,
	"**     wwwwwwwwww     ***************   ******************************   *******" ,
	"**     wwwwwwwwww     ***************                                    *******" ,
	"********************************************************************** & *******" ,
};
    cout << "Press U to go UP" << endl;
	cout << "Press D to go DOWN" << endl;
	cout << "Press L to go LEFT" << endl;
	cout << "Press R to go RIGHT" << endl;

	while (1)
	{

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns + 1; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns + 1; j++)
		{
			if(board[i][j] == '&')
			{
				playerRow = i;
				playerColumn = j;
			}
		}
	}
	cout << playerRow << ' ' << playerColumn << endl;

	cout << "Please type in an input: ";
	cin >> input;
	cout << endl;

	if(input == 'Q' || input == 'q')
	{
		cout << "You have quit the game." << endl;
		break;
	}

	else if(input == 'U' || input == 'u')
	{ 
		if(board[playerRow-1][playerColumn] == ' ')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow-1][playerColumn] = '&';
		    cout << "Player has moved up.";
		}

		else if(board[playerRow-1][playerColumn] == '=')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow-1][playerColumn] = '&';
			cout << "You won. Congratulations" << endl;
			break;
		}

		else
			cout << "YOU CAN'T DO THAT!";
	}

	else if(input == 'D' || input == 'd')
	{
		if(board[playerRow+1][playerColumn] == ' ')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow+1][playerColumn] = '&';
		    cout << "Player has moved down.";
		}

		else if(board[playerRow+1][playerColumn] == '=')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow+1][playerColumn] = '&';
			cout << "You won. Congratulations." << endl;
			break;
		}

		else
			cout << "YOU CAN'T DO THAT!";
	}

	else if(input == 'L' || input == 'l')
	{
		if(board[playerRow][playerColumn-1] == ' ')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow][playerColumn-1] = '&';
		    cout << "Player has moved left.";
		}

		else if(board[playerRow][playerColumn-1] == '=')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow][playerColumn-1] = '&';
			cout << "You won. Congratulations." << endl;
			break;
		}

		else
			cout << "YOU CAN'T DO THAT!";
	}

	else if(input == 'R' || input == 'r')
	{
		if(board[playerRow][playerColumn+1] == ' ')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow][playerColumn+1] = '&';
		    cout << "Player has moved right.";
		}

		else if(board[playerRow][playerColumn+1] == '=')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow][playerColumn+1] = '&';
			cout << "You won. Congratulations." << endl;
			break;
		}

		else
			cout << "YOU CAN'T DO THAT!";
	}

	else
		cout << "Incorrect character. Please try again.";
	
	cout << endl << endl;

	}

	

	system ("pause");
	return 0;
}
